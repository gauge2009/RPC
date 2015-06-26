// cppClient.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "cppClient.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ψһ��Ӧ�ó������

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	HMODULE hModule = ::GetModuleHandle(NULL);

	if (hModule != NULL)
	{
		// ��ʼ�� MFC ����ʧ��ʱ��ʾ����
		if (!AfxWinInit(hModule, NULL, ::GetCommandLine(), 0))
		{
			// TODO:  ���Ĵ�������Է���������Ҫ
			_tprintf(_T("����:  MFC ��ʼ��ʧ��\n"));
			nRetCode = 1;
		}
		else
		{
			// TODO:  �ڴ˴�ΪӦ�ó������Ϊ��д���롣
		}
	}
	else
	{
		// TODO:  ���Ĵ�������Է���������Ҫ
		_tprintf(_T("����:  GetModuleHandle ʧ��\n"));
		nRetCode = 1;
	}
	CallService();
	return nRetCode;
}

void  CallService()
{

	struct soap *soap = soap_new();
	//struct soap soap;
	//soap_init(&soap);
	//soap_set_mode(&soap, SOAP_C_UTFSTRING);
	//soap.mode |= SOAP_C_UTFSTRING;
	//soap.send_timeout = 10;
	//soap.recv_timeout = 10;

	double x = 11, y = 22;

	_JR2__Add input;
	input.x = &x;
	input.y = &y;
	_JR2__AddResponse  output;

	char go[20];;
	printf("��ʼ������񣿣�Y/N��\n");
	if (int state = scanf_s("%s", go, 20) > 0){
		if (*go == 'Y' || *go == 'y'){
			int rs = soap_call___wbICalc3__Add(soap, NULL, NULL, &input, output);
			if (rs == SOAP_OK){
				double *temp = output.AddResult;
				printf("Sum = %f\n", *temp);
			}
			else {// an error occurred  
				soap_print_fault(soap, stderr); // display the SOAP fault on the stderr stream  
			}
		}
		else if  (*go == 'N' || *go == 'n'){
			printf("������ֹ\nsfd");
		}
		else{//������20���ַ����ڣ�state��Ϊ1������Ԥ��
			CallService();
		}
	}
	else{//������20���ַ����ϣ�state=0��scanf_s��ֶ��ȡbuffer����� ���CallService()����������� "��ʼ������񣿣�Y/N��\n" ���˴�����Ϊ����Ȼ����Ԥ�ڳ��ȣ�һ���ǲ���Ҫ�ģ�ֱ�ӳ�ϴstdin�������buffer����
		fflush(stdin);
		CallService();
	}
}

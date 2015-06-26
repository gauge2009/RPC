// cppClient.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "cppClient.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 唯一的应用程序对象

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	HMODULE hModule = ::GetModuleHandle(NULL);

	if (hModule != NULL)
	{
		// 初始化 MFC 并在失败时显示错误
		if (!AfxWinInit(hModule, NULL, ::GetCommandLine(), 0))
		{
			// TODO:  更改错误代码以符合您的需要
			_tprintf(_T("错误:  MFC 初始化失败\n"));
			nRetCode = 1;
		}
		else
		{
			// TODO:  在此处为应用程序的行为编写代码。
		}
	}
	else
	{
		// TODO:  更改错误代码以符合您的需要
		_tprintf(_T("错误:  GetModuleHandle 失败\n"));
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
	printf("开始请求服务？（Y/N）\n");
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
			printf("操作终止\nsfd");
		}
		else{//输入在20个字符以内，state虽为1，但非预期
			CallService();
		}
	}
	else{//输入在20个字符以上，state=0，scanf_s会分多次取buffer，造成 多次CallService()，故输出多行 "开始请求服务？（Y/N）\n" ，此处处理为：既然超出预期长度，一定是不需要的，直接冲洗stdin流（清空buffer）。
		fflush(stdin);
		CallService();
	}
}

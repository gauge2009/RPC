// client.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "client.h"

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
	GetWeather();
	//return nRetCode;
}

void GetWeather()
{
	int cnt = 0;
	struct soap soap;
	soap_init(&soap);
	soap_set_mode(&soap, SOAP_C_UTFSTRING);
	soap.mode |= SOAP_C_UTFSTRING;

	_Weather1__getWeatherbyCityName weatherbyCityName;
	_Weather1__getWeatherbyCityNameResponse weatherbyCityNameResponse;

	weatherbyCityName.theCityName = "����";

	CStringList list;
	if (SOAP_OK == soap_call___Weather1__getWeatherbyCityName(&soap, NULL, NULL, &weatherbyCityName, weatherbyCityNameResponse))
	{
#if 0
		char **weather = weatherbyCityNameResponse.getWeatherbyCityNameResult->string;

		while (*weather)
		{
			CString cs;

			MultiByte2WideChar(*weather++, cs);
			list.AddTail(cs);
		}
#else
		cnt = weatherbyCityNameResponse.getWeatherbyCityNameResult->__sizestring;
		for (int i = 0; i < cnt; i++)
		{
			CString cs;

			MultiByte2WideChar(weatherbyCityNameResponse.getWeatherbyCityNameResult->string[i], cs);
			list.AddTail(cs);
		}
#endif
	}
	soap_destroy(&soap);
	soap_end(&soap);
	soap_done(&soap);

	/*for (int i = 0; i < list.GetCount();i++){
		cout << list.GetAt(POSITION(1) ) << endl;
	}*/
	cout << list.GetCount() << endl;

}

void MultiByte2WideChar(char* src, const wchar_t* dst)
{
	if (NULL == src || NULL == dst)
	{
		return;
	}
	int srcSize = strlen(src);
	int iLen = MultiByteToWideChar(CP_UTF8, 0, src, srcSize, NULL, 0);
	if (0 == iLen)
	{
		return;
	}

	MultiByteToWideChar(CP_UTF8, 0, src, strlen(src), (LPWSTR)dst, iLen * 2);
}

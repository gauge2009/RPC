// client.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "client.h"

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

	weatherbyCityName.theCityName = "北京";

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

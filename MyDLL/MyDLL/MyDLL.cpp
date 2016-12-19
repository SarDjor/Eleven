// MyDLL.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include <iostream>
#include "MyDLL.h"
#include <Windows.h>
using namespace std;
LPWSTR CharToLPWSTR(LPCSTR char_string)
{
	LPWSTR res;
	DWORD res_len = MultiByteToWideChar(1251, 0, char_string, -1, NULL, 0);
	res = (LPWSTR)GlobalAlloc(GPTR, (res_len + 1) * sizeof(WCHAR));
	MultiByteToWideChar(1251, 0, char_string, -1, res, res_len);
	return res;
}

__declspec(dllexport) LPCWSTR Foo::vivod() {
	
	char buf[256];
	unsigned long size = 256;
	GetComputerNameA(buf, &size);
	LPCWSTR a = CharToLPWSTR(buf);
	return a;
}

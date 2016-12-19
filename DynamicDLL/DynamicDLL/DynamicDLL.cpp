#include <iostream>
#include <Windows.h>
LPWSTR CharToLPWSTR(LPCSTR char_string)
{
	LPWSTR res;
	DWORD res_len = MultiByteToWideChar(1251, 0, char_string, -1, NULL, 0);
	res = (LPWSTR)GlobalAlloc(GPTR, (res_len + 1) * sizeof(WCHAR));
	MultiByteToWideChar(1251, 0, char_string, -1, res, res_len);
	return res;
}

extern "C" __declspec(dllexport) LPCWSTR LetterList(){
	char buf[256];
	unsigned long size = 256;
	GetComputerNameA(buf, &size);
	LPCWSTR a = CharToLPWSTR(buf);
	return a;
}
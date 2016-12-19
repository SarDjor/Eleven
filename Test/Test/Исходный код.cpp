#include <iostream>
#include <Windows.h>
int main(){
	HMODULE hi = LoadLibraryA("DynamicDLL.dll");
	if (!hi)
		std::cout << "GOVNO";
	char*(*dllHelloWorld)();
	dllHelloWorld = (char*(*)())GetProcAddress(hi,"LetterList");
	std::cout << *dllHelloWorld;
	if (!dllHelloWorld)
		std::cout << "GOVNO";
	return 0;
}
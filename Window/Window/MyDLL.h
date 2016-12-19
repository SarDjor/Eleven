#include <iostream>
#include <Windows.h>
using namespace std;
class Foo{
public:
__declspec(dllexport) LPCWSTR vivod();
};
#include <iostream>
int main(){
	char a = '1';
	long u = 0;
	int b = static_cast<int>(a);
	a = static_cast<char>(b);
	u = static_cast<long>(b);
	std::cout << b;
	std::cout << a;
	std::cout << u;
	system("pause");
	return 0;
}
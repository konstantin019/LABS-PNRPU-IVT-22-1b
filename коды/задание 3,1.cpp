#include <iostream>

int main() {
	setlocale(LC_ALL, "RUS");
	char a, b, c;
	std::cout << "Введите первое число" << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число" << std::endl;
	std::cin >> b;
	char* prt = &a;
	char* prt1 = &b;
	c = *prt;
	*prt = b;
	*prt1 = c;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

}
#include <iostream>

int main() {
	setlocale(LC_ALL, "RUS");
	int a, b;
	std::cout << "Введите первое число" << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число" << std::endl;
	std::cin >> b;
	int* prt2 = &a;
	int* prt1 = &b;
	*prt1 += *prt2;
	std::cout << *prt1 << std::endl;
}
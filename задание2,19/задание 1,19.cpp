﻿#include <iostream>

using namespace std;

int main()
{
	int n, a = 0;
	cout << "введите количество элементов" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			a -= i;
		}
		else {
			a += i;
		}
	}
	cout << "сумма" << endl << a;
}

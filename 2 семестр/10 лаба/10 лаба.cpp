#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, k;
	cout << "Ââåäèòå äëèíó ìàññèâà: ";
	cin >> n;
	string* arr = new string[n];

	cout << "Ââåäèòå ýëåìåíòû ìàññèâà" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "Ââåäèòå ïîçèöèþ íîâîé ñòðîêè: ";
	cin >> k;

	string* arr1 = new string[n + 1];

	for (int i = 0; i < n + 1; i++)
	{
		if (i < k - 1)
		{
			arr1[i] = arr[i];
		}
		else if (i == k - 1)
		{
			cout << "Ââåäèòå ñòðîêó, êîòîðóþ õîòèòå äîáàâèòü" << endl;
			cin >> arr1[i];
		}
		if (i > k - 1)
		{
			arr1[i] = arr[i - 1];
		}
	}

	for (int i = 0; i < n + 1; i++)
	{
		cout << arr1[i] << ' ';
	}

	delete[] arr;
	delete[] arr1;
	return 0;
}

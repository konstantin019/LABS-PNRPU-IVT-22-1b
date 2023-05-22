#include <iostream>
using namespace std;

int sizeArr = 0;

void arrDisplay(int arr[], int size, int k)
{
	if (k > size)
	{
		k %= size;
	}
	//c k-ãî äî 0-ãî
	for (int i = k - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	//ïðîõîä èç êîíöà äî k+1
	for (int i = size - 1; i >= k; i--)
	{
		cout << arr[i] << " ";
	}
}

void bubblesort(int arr[], int size)
{
	for (int i = size - 1; i > 0; i--)
	{
		for (int j = size - 1; j >= size - i; j--)
		{
			if (arr[j] > arr[j - 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}

void deleteoddlyelement(int arr[], int size)
{
	int newSize = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[newSize++] = arr[i];
		}
	}
	sizeArr = newSize;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int k;
	int arr[100];

	cout << "Ââåäèòå äëèíó ìàññèâà" << endl;
	cin >> sizeArr;

	for (int i = 0; i < sizeArr; i++)
	{
		arr[i] = rand() % 25;
	}

	for (int i = 0; i < sizeArr; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Ââåäèòå ýëåìåíò k" << endl;
	cin >> k;

	cout << "Âûâîä ìàññèâà,íà÷èíàÿ ñ ýëåìåíòà k äî k+1" << endl;
	arrDisplay(arr, sizeArr, k);
	cout << endl;

	//ñîðòèðîâêà ìåòîäîì ïóçûðüêà
	bubblesort(arr, sizeArr);
	cout << "Ïîñëå ñîðòèðîâêè" << endl;

	for (int i = 0; i < sizeArr; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	cout << "Âûâîä ìàññèâà,íà÷èíàÿ ñ ýëåìåíòà k äî k+1(ïîñëå ñîðòèðîâêè)" << endl;
	arrDisplay(arr, sizeArr, k);
	cout << endl;

	//óäàëåíèå íå÷åòíûõ ýëåìåíòîâ
	deleteoddlyelement(arr, sizeArr);
	cout << "Ïîñëå óäàëåíèÿ íå÷åòíûõ ýëåìåíòîâ" << endl;

	for (int i = 0; i < sizeArr; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Âûâîä ìàññèâà,íà÷èíàÿ ñ ýëåìåíòà k äî k+1(ïîñëå óäàëåíèÿ íå÷åòíûõ ýëåìåíòîâ)" << endl;
	arrDisplay(arr, sizeArr, k);
	cout << endl;

	cout << "Âûâîä óïîðÿäî÷åííîãî ïî óáûâàíèþ ìàññèâà ÷åòíûõ ÷èñåë c k-ãî ýëåìåíòà ñïðàâà íàëåâî" << endl;
	arrDisplay(arr, sizeArr, k);

	return 0;
}

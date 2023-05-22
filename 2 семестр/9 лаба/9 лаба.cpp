#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	int i = 0;
	string str;
	cout << "Ââåäèòå êîëè÷åñòâî ñòðîê ôàéëà: ";
	cin >> n;
	ofstream fout("F1.txt");

	if (!fout.is_open())
	{
		return 1;
	}

	cin.get();
	for (int i = 0; i < n; i++)
	{
		getline(cin, str);
		fout << str << endl;
	}
	fout.close();

	ifstream f("F1.txt");
	ofstream fin("F2.txt");

	if (!f.is_open() && !fin.is_open())
	{
		return 1;
	}

	while (getline(f, str))
	{
		if (str[0] != 'À')
		{
			fin << str << endl;
		}
	}
	f.close();
	fin.close();

	ifstream f2("F2.txt");
	int count = 0;

	if (!f2.is_open())
	{
		return 1;
	}

	getline(f2, str);
	for (i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			count++;
		}
		else
		{
			break;
		}
	}

	f2.clear();
	f2.seekg(0);

	cout << "Ñòðîêè,êîòîðûå íàõîäÿòñÿ â ôàéëå F2" << endl;
	while (f2.peek() != EOF)
	{
		getline(f2, str);
		cout << str << '\n';
	}

	f2.close();

	cout << endl;
	cout << "Ïåðâîå ñëîâî â ôàéëå F2 ñîäåðæèò " << count << " ñèìâîëa(îâ)" << endl;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int tmp, max;

    cout << "Введите первое число:" << endl;
    
    cin >> tmp;
    
    max = tmp;

    for (int i = 2; i >0 ; i++)
    {
        cout << "Введите следующее число:" << endl;
        cin >> tmp;
        if (tmp == 0)
            return 0;
        if (tmp > max)
        {
            max = tmp;
        }
        else if (tmp < max)
        {
            cout << "Не упорядоченны" << endl;
            return 1;
        }
    }
    cout << "Упорядоченны" << endl;

}



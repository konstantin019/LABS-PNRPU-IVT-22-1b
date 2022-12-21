#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n, summ = 0;
    cin >> n;
    unsigned long long int a = n, b = n * 2, c = 1;
    while (a <= b)
    {
        c *= a;
        a += 1;
        if (a == b)
        {
            c *= a;
            summ += c;
            c = 1;
            n -= 1;
            a = n;
            b = a * 2;
            if (a == 0)
            {
                cout << summ << endl;
                return 0;
            }
        }
    }
}

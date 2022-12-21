// f(x) = arccos(x) - sqrt(1 - 0.3 * x^3);
// [0.1];

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    float a, b, c;
    float fA, fB, fC;
    double eps = 0.000001;
    a = 0;
    b = 1;
    while (b - a > eps)
    {
        c = (a + b) / 2;
        fA = (acos(a) - sqrt(1 - 0.3 * pow(a, 3)));
        fB = (acos(b) - sqrt(1 - 0.3 * pow(b, 3)));
        fC = (acos(c) - sqrt(1 - 0.3 * pow(c, 3)));
        if (fA * fC < 0) { b = c; }
        else if (fC * fB < 0) { a = c; }
        else { cout << "×òî-òî íå òî!" << endl; }
    }

    cout << a << "; " << b << endl;

    return 0;
}

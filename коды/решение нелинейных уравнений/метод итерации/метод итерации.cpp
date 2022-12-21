#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    float x, xPrev;
    double lambda = 0.5;
    x = 1;
    xPrev = -2;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (acos(xPrev) - sqrt(1 - 0.3 * pow(xPrev, 3))) + xPrev;
    }

    cout << "Корень по методу итераций: " << x << endl;

    return 0;
}

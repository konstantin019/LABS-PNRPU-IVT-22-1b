#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float x, fact=1, sum;

    cin >> n >> x;

    sum = 1 + x;
    for (int i = 2; i <= n; i++) {
        fact *= i;
        sum += (pow(x, i)) / fact;
    }
    cout << sum << endl;
}



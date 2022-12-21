#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a = 0, c, s = 1;
    float p, max = 0.0;
    
    cin >> n >> c;

    for (int i = 0; i > -1; i++)
    {
        if (n + i / n >= 360) {
            p = sin(n + i / n - 360*((n + i / n)/360));
        }
        else {
            p = sin(n + i / n);
        }
        if (p > max) {
            max = p;
            a += s;
            s = 0;
        }
        if (p == max) {
            s += 1;
        }
        if (i >= c) {
            cout << max << endl << a << endl << s << endl;
            return 1;
        }
        
    }

}



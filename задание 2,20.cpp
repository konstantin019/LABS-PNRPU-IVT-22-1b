#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float p, s;

    cin >> n >> s;
    if (s > 1) {
        cout << "Не входит" << endl;
        return 1;
    }

    for (int i = 0; i > -1; i++)
    {
        if (n + i / n >= 360) {
            p = sin(n + i / n -360);
        }
        else {
            p = sin(n + i / n);
        }
        
        if (s == p)
        {
            cout << "Присутсвует" << endl;
            return 0;
        }
        if (n + i / n >= 720) {
            cout << "Не входит" << endl;
            return 1;
        }
        cout << p << endl;
    }

}



#include <iostream>

using namespace std;

int main() {
	int n,c=1, b, max_0=-1000;
	cin >> n;

	for (int a = 0; a < n; a++) {
		cin >> b;
		if (b >= max_0) {
			max_0 = b;
			c = a+1;
		}
		}
	cout << max_0 << " " << c << endl;
}
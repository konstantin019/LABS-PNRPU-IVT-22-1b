#include <iostream> 
#include <cmath>
int main() {
    double a = 0, b = 1, c = b, d = a, la = 2.0 / 11.0;
    while (std::abs(c - d) > 0.000000001) {
        d = c;
        c += la * (std::acos(c) - std::sqrt(1 - 0.3 * pow(c, 3)));
    }
    std::cout << c << std::endl;
}

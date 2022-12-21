#include <iostream> 
#include <cmath>
int main() {
    double a = 1, b = 2, c = b, d = a;
    while (std::abs(c - d) > 0.000001) {
        d = c;
        double k = (std::acos(c) - std::sqrt(1 - 0.3 * pow(c, 3))) / c, e = std::acos(c) - std::sqrt(1 - 0.3 * pow(c, 3)) - k * c;
        c = -e / k;
    }
    std::cout << c << std::endl;
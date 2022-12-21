#include <iostream> 
#include <cmath>
int main() {
    double a = 1, b = 2, c;
    while ((std::acos(a) - std::sqrt(1 - 0.3 * pow(a, 3)) > 0.0000001) and ((std::acos(b) - std::sqrt(1 - 0.3 * pow(b, 3))))) {
        c = (a + b) / 2;
        if (std::acos(c) - std::sqrt(1 - 0.3 * pow(c, 3))) b = c;
        else a = c;
    }
    if (std::acos(c) - std::sqrt(1 - 0.3 * pow(c, 3))) std::cout << b << std::endl;
    else std::cout << a << std::endl;

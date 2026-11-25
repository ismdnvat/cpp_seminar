#include <iostream>

#define SQUARE(x) x * x

int main() {
    std::cout << SQUARE(3) << '\n';
    std::cout << SQUARE(1 + 2) << '\n';
}

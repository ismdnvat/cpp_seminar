#include <iostream>

int square(int x) {
    return x * x;
}

int main() {
    std::cout << square(3) << '\n';
    std::cout << square(1 + 2) << '\n';
}

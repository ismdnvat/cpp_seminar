#include <iostream>

int Factorial(int n) {
    return n * Factorial(n - 1);
}

int main() {
    std::cout << Factorial(5) << '\n';
    return 0;
}

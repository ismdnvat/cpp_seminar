#include <iostream>

int main() {
    int squares[5];
    for (int i = 1; i <= 5; ++i) {
        squares[i] = i * i;
    }
    std::cout << squares[1] << '\n';
    return 0;
}

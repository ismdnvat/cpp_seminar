#include <iostream>

int main() {
    int limit = 1;
    int steps = 0;
    while (limit > 0) {
        limit *= 2;
        ++steps;
    }
    std::cout << steps << '\n';
}

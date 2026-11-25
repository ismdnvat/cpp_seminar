#include <climits>
#include <iostream>

int main() {
    int big = INT_MAX;
    int next = big + 1;
    std::cout << next << '\n';

    int zero = 0;
    std::cout << 10 / zero << '\n';
    return 0;
}

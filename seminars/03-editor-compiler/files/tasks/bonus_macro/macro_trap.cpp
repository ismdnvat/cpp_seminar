#include <iostream>

#define DOUBLE(x) x * 2
#define AREA(w, h) w * h

int main() {
    std::cout << DOUBLE(3 + 1) << '\n';
    std::cout << AREA(2 + 1, 4) << '\n';
    std::cout << 100 / DOUBLE(5) << '\n';
}

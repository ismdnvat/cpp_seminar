#include <iostream>

int main() {
#ifdef DEBUG
    std::cout << "отладочная сборка\n";
#endif
    std::cout << "результат: 42\n";
}

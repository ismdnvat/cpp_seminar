#include <cassert>
#include <cstddef>
#include <iostream>

// Программа не компилируется. Добавьте const в сигнатуры функций (и только туда),
// чтобы main напечатал OK. Строки в main не менять.

int Max(int* data, size_t size) {
    int result = data[0];
    for (size_t i = 1; i < size; ++i) {
        if (data[i] > result) {
            result = data[i];
        }
    }
    return result;
}

void Fill(int* data, size_t size, int value) {
    for (size_t i = 0; i < size; ++i) {
        data[i] = value;
    }
}

int* FindFirst(int* data, size_t size, int value) {
    for (size_t i = 0; i < size; ++i) {
        if (data[i] == value) {
            return data + i;
        }
    }
    return nullptr;
}

int main() {
    const int primes[] = {2, 3, 5, 7};
    int zeros[3] = {};

    assert(Max(primes, 4) == 7);
    Fill(zeros, 3, 9);
    assert(Max(zeros, 3) == 9);

    const int* found = FindFirst(primes, 4, 5);
    assert(found == primes + 2);
    assert(FindFirst(primes, 4, 4) == nullptr);

    // Fill(primes, 4, 0);  // эта строка должна давать CE — проверьте

    std::cout << "OK\n";
}

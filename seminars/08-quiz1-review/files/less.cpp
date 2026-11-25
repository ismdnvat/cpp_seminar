#include <cassert>
#include <iostream>
#include <vector>

// 1. Less(int a, unsigned int b) — честное «a < b», и для отрицательных a.
// 2. PrintReversed — печатает вектор задом наперёд. Индекс — size_t, без UB.

int main() {
    assert(Less(-1, 1u));
    assert(Less(3, 5u));
    assert(!Less(5, 3u));
    assert(!Less(7, 7u));
    assert(Less(-2000000000, 4000000000u));

    PrintReversed({1, 2, 3});  // 321
    PrintReversed({});         // пустая строка

    std::cout << "OK\n";
}

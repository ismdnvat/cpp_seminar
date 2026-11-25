#include <cassert>
#include <iostream>
#include <vector>

// Напишите Sum так, чтобы main напечатал OK. sizeof внутри Sum не использовать.

int main() {
    int five[] = {1, 2, 3, 4, 5};
    int one[] = {7};
    std::vector<int> v = {10, 20, 30};

    assert(Sum(five, 5) == 15);
    assert(Sum(one, 1) == 7);
    assert(Sum(v.data(), v.size()) == 60);
    assert(Sum(five, 0) == 0);

    std::cout << "OK\n";
}

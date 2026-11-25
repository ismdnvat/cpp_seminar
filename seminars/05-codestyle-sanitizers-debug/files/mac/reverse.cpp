// Печатает числа в обратном порядке.
// Ввод: n, затем n чисел. Пример: 5  1 2 3 4 5  ->  5 4 3 2 1
#include <iostream>
#include <vector>

std::vector<int> Reversed(const std::vector<int>& numbers) {
    std::vector<int> result;
    for (size_t i = numbers.size(); i > 0; --i) {
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    size_t count = 0;
    std::cin >> count;
    std::vector<int> numbers(count);
    for (size_t i = 0; i < count; ++i) {
        std::cin >> numbers[i];
    }
    for (int number : Reversed(numbers)) {
        std::cout << number << ' ';
    }
    std::cout << '\n';
    return 0;
}

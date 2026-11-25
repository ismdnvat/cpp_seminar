#include <iostream>
#include <vector>

int sum(std::vector<int> numbers) {
    int total = 0;
    for (int i = 0; i < static_cast<int>(numbers.size()); ++i) {
        total += numbers[i];
    }
    return total;
}

int max_value(std::vector<int> numbers) {
    int best = numbers[0];
    for (int i = 1; i < static_cast<int>(numbers.size()); ++i) {
        if (numbers[i] > best) {
            best = numbers[i];
        }
    }
    return best;
}

int main() {
    std::vector<int> v = {4, 8, 15, 16, 23, 42};
    std::cout << sum(v) << ' ' << max_value(v) << '\n';
}

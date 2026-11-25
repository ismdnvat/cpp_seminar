#include <iostream>
#include <vector>

int max_value(std::vector<int> numbers) {
    int best;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] > best) {
            best = numbers[i];
        }
    }
    return best;
}

int clamp_to_ten(int x) {
    if (x > 10) {
        return 10;
    }
}

int main() {
    std::vector<int> v = {4, 8, 15, 16, 23, 42};
    int limit = 100;
    std::cout << max_value(v) << '\n';
    std::cout << clamp_to_ten(3) << '\n';
}

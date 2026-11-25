#include <iostream>
#include <vector>

int count_positive(std::vector<int> numbers, int limit) {
    int count = 0;
    int total;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] > 0) {
            count += 1;
        }
    }
    std::cout << total << '\n';
    return count;
}

int main() {
    std::vector<int> v = {1, -2, 3};
    std::cout << count_positive(v, 10) << '\n';
}

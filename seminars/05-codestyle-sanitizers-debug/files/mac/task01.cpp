#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    const int& first = numbers[0];
    numbers.push_back(4);
    std::cout << first << '\n';
    return 0;
}

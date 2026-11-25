#include <iostream>
#include <vector>

int main() {
    std::vector<int> data(4000000);
    data[0] = 1;
    std::cout << "получилось: " << data[0] << '\n';
}

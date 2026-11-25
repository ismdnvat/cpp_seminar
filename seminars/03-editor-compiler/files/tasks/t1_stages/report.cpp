#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names = {"masha", "petya", "vasya"};
    int total_length = 0;
    for (int i = 0; i < static_cast<int>(names.size()); ++i) {
        total_length += static_cast<int>(names[i].size());
    }
    std::cout << "имён: " << names.size() << ", букв всего: " << total_length << '\n';
}

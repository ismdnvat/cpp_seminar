#include <iostream>
#include <string>

int main() {
    int age;
    std::string name;

    std::cin >> age;
    std::getline(std::cin, name);

    std::cout << "age=" << age << " name=[" << name << "]\n";
}

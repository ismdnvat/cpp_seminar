#include <iostream>
#include <string>

int main() {
    int age;
    std::string name;

    std::cin >> age;
    std::cin.ignore(10000, '\n');
    std::getline(std::cin, name);

    std::cout << "age=" << age << " name=[" << name << "]\n";
}

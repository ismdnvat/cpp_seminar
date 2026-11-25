// Очередь в столовую: первый в очереди, потом ещё трое пришли.
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> queue = {"Anna"};
    const std::string& first = queue[0];
    queue.push_back("Boris");
    queue.push_back("Vera");
    queue.push_back("Gleb");
    std::cout << "first: " << first << '\n';
    std::cout << "people: " << queue.size() << '\n';
    return 0;
}

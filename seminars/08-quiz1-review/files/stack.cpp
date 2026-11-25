#include <cassert>
#include <iostream>
#include <vector>

// Напишите класс Stack через приватное наследование от std::vector<int>.

int main() {
    Stack s;
    assert(s.empty());

    s.Push(1);
    s.Push(2);
    assert(s.size() == 2);
    assert(s.Top() == 2);

    s.Pop();
    assert(s.Top() == 1);
    assert(!s.empty());

    // каждая из строк ниже должна давать CE:
    // s.push_back(3);
    // s[0] = 5;
    // std::vector<int>& v = s;

    std::cout << "OK\n";
}

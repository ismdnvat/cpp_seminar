#include <cstdio>

int main() {
    char* s = (char*)"hello";
    s[0] = 'j';
    std::printf("%s\n", s);
}

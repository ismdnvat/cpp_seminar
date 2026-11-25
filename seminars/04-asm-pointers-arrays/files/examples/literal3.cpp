#include <cstdio>

int main() {
    char s[] = "hello";
    s[0] = 'j';
    std::printf("%s %zu\n", s, sizeof(s));
}

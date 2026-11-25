#include <cstdio>
#include <cstring>

int main() {
    char s[10] = "hi";
    std::printf("%zu %zu\n", sizeof(s), std::strlen(s));
    s[1] = '\0';
    std::printf("%zu %s\n", std::strlen(s), s);
}

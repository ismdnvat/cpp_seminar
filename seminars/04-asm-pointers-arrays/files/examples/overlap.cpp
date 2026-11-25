#include <cstdio>
#include <cstring>

int main() {
    char a[] = "abcdef";
    char b[] = "abcdef";
    std::memcpy(a + 1, a, 4);
    std::memmove(b + 1, b, 4);
    std::printf("%s\n%s\n", a, b);
}

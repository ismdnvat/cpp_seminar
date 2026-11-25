#include <cstdio>
#include <cstring>

int main() {
    char a[] = "cat";
    char b[] = "cat";
    std::printf("%d\n", a == b);
    std::printf("%d\n", std::strcmp(a, b) == 0);
}

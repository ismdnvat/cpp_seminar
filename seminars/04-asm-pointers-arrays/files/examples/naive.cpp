#include <cstddef>
#include <cstdio>

void naive_copy(char* dst, const char* src, std::size_t n) {
    for (std::size_t i = 0; i < n; ++i) {
        dst[i] = src[i];
    }
}

int main() {
    char a[] = "abcdef";
    naive_copy(a + 1, a, 4);
    std::printf("%s\n", a);
}

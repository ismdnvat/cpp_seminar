#include <cstdio>

int main() {
    int m[3][4] = {};
    int (*row)[4] = m;
    int* cells[3];
    std::printf("%zu %zu %zu\n", sizeof(m), sizeof(row), sizeof(cells));
    std::printf("%td\n", (char*)(row + 1) - (char*)row);
    const char* names[] = {"ann", "bob", "carl"};
    std::printf("%zu %s %c\n", sizeof(names) / sizeof(names[0]), names[2], names[2][1]);
}

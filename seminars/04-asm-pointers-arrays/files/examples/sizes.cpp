#include <cstdio>

void print_size(int a[10]) {
    std::printf("in function: %zu\n", sizeof(a));
}

int main() {
    int a[10] = {};
    int* p = a;
    std::printf("array: %zu\n", sizeof(a));
    std::printf("pointer: %zu\n", sizeof(p));
    print_size(a);
}

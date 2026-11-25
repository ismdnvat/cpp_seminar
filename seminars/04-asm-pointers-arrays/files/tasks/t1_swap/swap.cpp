#include <cstdio>

void swap_ints(int* a, int* b) {
}

int main() {
    int x = 1;
    int y = 2;
    swap_ints(&x, &y);
    std::printf("%d %d\n", x, y);
}

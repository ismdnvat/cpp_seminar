#include <cstdio>

void swap_values(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap_pointers(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 1;
    int y = 2;
    swap_values(x, y);
    std::printf("%d %d\n", x, y);
    swap_pointers(&x, &y);
    std::printf("%d %d\n", x, y);
}

#include <cstdio>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int* mid = a + 2;
    std::printf("%d %d %d\n", mid[-2], mid[0], mid[2]);
    std::printf("%td\n", &a[4] - mid);
}

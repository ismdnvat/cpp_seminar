#include <cstdio>

int main() {
    int a[4] = {1, 2, 3, 4};
    int* p = a;
    *p++ = 10;
    ++*p;
    std::printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}

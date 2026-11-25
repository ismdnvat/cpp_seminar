#include <cstdio>

int main() {
    int n = 0;
    double x = 0;
    char word[32];
    int read = std::scanf("%d %lf %31s", &n, &x, word);
    std::printf("read %d values: n=%d x=%.2f word=%s\n", read, n, x, word);
    std::printf("[%5d] [%-5d] [%05d] [%x] [%c]\n", n, n, n, n, 'A');
}

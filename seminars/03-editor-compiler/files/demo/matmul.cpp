#include <iostream>
#include <vector>

int main() {
    int n = 600;
    std::vector<std::vector<int>> a(n, std::vector<int>(n, 2));
    std::vector<std::vector<int>> b(n, std::vector<int>(n, 3));
    std::vector<std::vector<int>> c(n, std::vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    std::cout << c[0][0] << '\n';
}

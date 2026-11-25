#include <cstdio>
#include <cstdlib>

int main() {
    std::printf("%d %d %d %d\n", std::atoi("42"), std::atoi("  -17abc"), std::atoi("abc"), std::atoi("0"));
    std::printf("%g %g\n", std::atof("3.14"), std::atof("1e3"));
    char* end = nullptr;
    long v = std::strtol("123xyz", &end, 10);
    std::printf("%ld \"%s\"\n", v, end);
}

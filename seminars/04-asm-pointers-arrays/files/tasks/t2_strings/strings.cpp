#include <cstddef>
#include <cstdio>
#include <cstring>

std::size_t my_strlen(const char* s) {
    return 0;
}

char* my_strcpy(char* dst, const char* src) {
    return dst;
}

int my_strcmp(const char* a, const char* b) {
    return 0;
}

int sign(int x) {
    return (x > 0) - (x < 0);
}

int main() {
    const char* words[] = {"", "a", "hello", "apple", "apricot", "app"};
    int failed = 0;
    for (const char* w : words) {
        if (my_strlen(w) != std::strlen(w)) {
            std::printf("FAIL my_strlen(\"%s\")\n", w);
            ++failed;
        }
        char buf[32];
        my_strcpy(buf, w);
        if (std::strcmp(buf, w) != 0) {
            std::printf("FAIL my_strcpy(\"%s\")\n", w);
            ++failed;
        }
        for (const char* v : words) {
            if (sign(my_strcmp(w, v)) != sign(std::strcmp(w, v))) {
                std::printf("FAIL my_strcmp(\"%s\", \"%s\")\n", w, v);
                ++failed;
            }
        }
    }
    if (failed == 0) {
        std::printf("OK\n");
    }
    return failed == 0 ? 0 : 1;
}

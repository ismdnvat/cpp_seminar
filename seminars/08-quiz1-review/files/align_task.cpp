#include <cstdint>
#include <iostream>

// Переставьте поля так, чтобы static_assert прошёл. Поля не удалять и типы не менять.
struct Packet {
    bool urgent;
    double timestamp;
    int16_t port;
    int64_t id;
    char kind;
    int32_t size;
};

static_assert(sizeof(Packet) == 24);

int main() {
    std::cout << sizeof(Packet) << '\n';
}

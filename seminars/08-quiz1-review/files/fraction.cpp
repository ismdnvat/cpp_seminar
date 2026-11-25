#include <cassert>
#include <iostream>
#include <sstream>

// Напишите класс Fraction — несократимая дробь, знаменатель всегда > 0.

int main() {
    Fraction a(1, 2);
    Fraction b(1, 3);

    assert(a + b == Fraction(5, 6));
    assert(a + 1 == Fraction(3, 2));
    assert(1 + a == Fraction(3, 2));
    assert(Fraction(2, 4) == a);
    assert(Fraction(1, -2) == -a);
    assert(b < a);
    assert(!(a < a));

    a += b;
    assert(a == Fraction(5, 6));

    std::ostringstream out;
    out << Fraction(6, -4) << ' ' << Fraction(3);
    assert(out.str() == "-3/2 3/1");

    std::cout << "OK\n";
}

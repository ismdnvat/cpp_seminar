// Площадь поля в квадратных метрах и в гектарах.
// Ввод: ширина и длина в метрах. Пример: 100000 100000
#include <iostream>

const int kSquareMetersPerHectare = 10000;

int main() {
    int width = 0;
    int length = 0;
    std::cin >> width >> length;
    int area = width * length;
    std::cout << area << " m^2 = " << area / kSquareMetersPerHectare << " ha\n";
    return 0;
}

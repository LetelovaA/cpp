#include <iostream>
#include <cmath>

// Вариант 1: Используя стандартную функцию pow
double cubicRootVariant1(double a) {
    return std::pow(a, 1.0 / 3);
}

// Вариант 2: Итерационная формула
double cubicRootVariant2(double a) {
    double x = a;  // Начальное приближение

    // Итерационная формула (повторяем до сходимости)
    for (int i = 0; i < 100; ++i) {
        x = (2 * x + a / (x * x)) / 3;
    }

    return x;
}

int main() {
    double number;

    // Ввод числа
    std::cout << "Enter a number to calculate the cube root: ";
    std::cin >> number;

    // Вариант 1: Используя стандартную функцию pow
    double result1 = cubicRootVariant1(number);
    std::cout << "Cube root (option 1): " << result1 << std::endl;

    // Вариант 2: Итерационная формула
    double result2 = cubicRootVariant2(number);
    std::cout << "Cube root (option 2): " << result2 << std::endl;

    return 0;
}

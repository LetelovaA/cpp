#include <iostream>
#include <cmath>

// Функция для вычисления действительных корней квадратного уравнения
int Myroot(double a, double b, double c, double& x1, double& x2) {
    // Вычисляем дискриминант
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Два действительных корня
        x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        return 1;  // Корни найдены
    }
    else if (discriminant == 0) {
        // Один действительный корень
        x1 = -b / (2 * a);
        x2 = x1;
        return 0;  // Оба корня совпадают
    }
    else {
        // Корней нет
        return -1;
    }
}

int main() {
    double a, b, c, x1, x2;

    // Ввод коэффициентов квадратного уравнения
    std::cout << "Enter coefficients (a, b, c): ";
    std::cin >> a >> b >> c;

    // Переменная для хранения результата функции
    int result = Myroot(a, b, c, x1, x2);

    // Вывод результата
    if (result == 1) {
        std::cout << "Roots: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else if (result == 0) {
        std::cout << "Rootн: x1 = x2 = " << x1 << std::endl;
    }
    else {
        std::cout << "No roots" << std::endl;
    }

    return 0;
}

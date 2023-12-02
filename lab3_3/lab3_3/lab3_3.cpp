#include <iostream>
#include <cmath>

// Функция для вычисления площади равностороннего треугольника
double calculateArea(double side) {
    return (sqrt(3) / 4) * pow(side, 2);
}

// Функция для вычисления площади разностороннего треугольника
double calculateArea(double side1, double side2, double side3) {
    // Используем формулу Герона
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main() {
    char triangleType;

    // Диалог с пользователем
    std::cout << "Select the type of triangle (equilateral - '1', different-sided - '2'): ";
    std::cin >> triangleType;

    if (triangleType == '1') {
        double side;
        std::cout << "Side length: ";
        std::cin >> side;

        // Вызов функции для равностороннего треугольника
        double area = calculateArea(side);
        std::cout << "Area: " << area << std::endl;
    }
    else if (triangleType == '2') {
        double side1, side2, side3;
        std::cout << "3 sides lengths (through the space): ";
        std::cin >> side1 >> side2 >> side3;

        // Вызов функции для разностороннего треугольника
        double area = calculateArea(side1, side2, side3);
        std::cout << "Area: " << area << std::endl;
    }
    else {
        std::cout << "Incorrect triangle type selection.\n";
    }

    return 0;
}

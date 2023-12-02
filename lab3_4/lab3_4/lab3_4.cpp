#include <iostream>

// Рекурсивная функция для вычисления суммы ряда
int calculateSum(int n) {
    // Базовый случай: сумма для n=0 равна 0
    if (n == 0) {
        return 0;
    }
    else {
        // Рекурсивный случай: сумма для n равна предыдущей сумме плюс 5*n
        return calculateSum(n - 1) + 5 * n;
    }
}

int main() {
    int n;

    // Ввод значения n
    std::cout << "Enter number n (n > 0): ";
    std::cin >> n;

    // Проверка на корректность ввода
    if (n <= 0) {
        std::cout << "Error. Enter positive number n.\n";
        return 1;
    }

    // Вычисление суммы ряда и вывод результата
    int result = calculateSum(n);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}

#include <iostream>

// Рекурсивная функция для перевода числа из десятичной системы в двоичную
void decimalToBinary(int num) {
    // Базовый случай: если число равно 0, завершаем рекурсию
    if (num == 0) {
        return;
    }
    else {
        // Рекурсивный случай: вызываем функцию для num / 2
        decimalToBinary(num / 2);

        // Выводим остаток при делении на 2 (бит числа в двоичной системе)
        std::cout << num % 2;
    }
}

int main() {
    int num;

    // Ввод значения в десятичной системе
    std::cout << "Enter number: ";
    std::cin >> num;

    // Проверка на корректность ввода
    if (num < 0) {
        std::cout << "Enter positive number.\n";
        return 1;
    }

    // Вызов рекурсивной функции и вывод результата
    std::cout << "Binary number: ";
    decimalToBinary(num);
    std::cout << std::endl;

    return 0;
}

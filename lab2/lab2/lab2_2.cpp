#include <iostream>
#include <string>
#include <cctype>

int main2() {
    // Ввод номера СНИЛС
    std::string snils;
    std::cout << "Enter SNILS number: ";
    std::cin >> snils;

    // Проверка длины номера СНИЛС
    if (snils.length() != 11) {
        std::cout << "SNILS is invalid (incorrect length).\n";
        return 0;
    }

    // Проверка наличия только цифр в строке
    for (char ch : snils) {
        if (!isdigit(ch)) {
            std::cout << "SNILS is invalid (contains non-numeric characters).\n";
            return 0;
        }
    }

    // Проверка основной части на отсутствие более двух одинаковых цифр подряд
    for (int i = 0; i < 9; ++i) {
        if (snils[i] == snils[i + 1] && snils[i + 1] == snils[i + 2]) {
            std::cout << "SNILS is invalid (more than two identical digits in a row in the main part).\n";
            return 0;
        }
    }

    // Рассчет контрольного числа
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += (snils[i] - '0') * (9 - i);
    }

    // Проверка валидности контрольного числа
    if (sum < 100) {
        if (sum == (snils[9] - '0') * 10 + (snils[10] - '0')) {
            std::cout << "SNILS is valid.\n";
        }
        else {
            std::cout << "SNILS is invalid (invalid check digit).\n";
        }
    }
    else {
        int remainder = sum % 101;
        if (remainder < 100 && remainder == (snils[9] - '0') * 10 + (snils[10] - '0')) {
            std::cout << "SNILS is valid.\n";
        }
        else {
            std::cout << "SNILS is invalid (invalid check digit).\n";
        }
    }

    return 0;
}

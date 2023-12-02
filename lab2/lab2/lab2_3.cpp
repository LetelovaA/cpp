#include <iostream>
#include <vector>

int main3() {
    // Доступные номиналы монет
    std::vector<int> coins = { 10, 5, 2, 1 };

    // Вводимая сумма 
    int totalAmount;
    std::cout << "Enter number: ";
    std::cin >> totalAmount;

    std::cout << "Coins: ";

    // Используем жадный алгоритм для выдачи суммы
    for (int coin : coins) {
        int count = totalAmount / coin;
        totalAmount %= coin;

        for (int i = 0; i < count; ++i) {
            std::cout << coin << " ";
        }
    }

    std::cout << "\n";

    return 0;
}

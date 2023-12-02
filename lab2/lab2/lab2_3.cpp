#include <iostream>
#include <vector>

int main3() {
    // ��������� �������� �����
    std::vector<int> coins = { 10, 5, 2, 1 };

    // �������� ����� 
    int totalAmount;
    std::cout << "Enter number: ";
    std::cin >> totalAmount;

    std::cout << "Coins: ";

    // ���������� ������ �������� ��� ������ �����
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

#include <iostream>

// ����������� ������� ��� �������� ����� �� ���������� ������� � ��������
void decimalToBinary(int num) {
    // ������� ������: ���� ����� ����� 0, ��������� ��������
    if (num == 0) {
        return;
    }
    else {
        // ����������� ������: �������� ������� ��� num / 2
        decimalToBinary(num / 2);

        // ������� ������� ��� ������� �� 2 (��� ����� � �������� �������)
        std::cout << num % 2;
    }
}

int main() {
    int num;

    // ���� �������� � ���������� �������
    std::cout << "Enter number: ";
    std::cin >> num;

    // �������� �� ������������ �����
    if (num < 0) {
        std::cout << "Enter positive number.\n";
        return 1;
    }

    // ����� ����������� ������� � ����� ����������
    std::cout << "Binary number: ";
    decimalToBinary(num);
    std::cout << std::endl;

    return 0;
}

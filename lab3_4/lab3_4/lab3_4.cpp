#include <iostream>

// ����������� ������� ��� ���������� ����� ����
int calculateSum(int n) {
    // ������� ������: ����� ��� n=0 ����� 0
    if (n == 0) {
        return 0;
    }
    else {
        // ����������� ������: ����� ��� n ����� ���������� ����� ���� 5*n
        return calculateSum(n - 1) + 5 * n;
    }
}

int main() {
    int n;

    // ���� �������� n
    std::cout << "Enter number n (n > 0): ";
    std::cin >> n;

    // �������� �� ������������ �����
    if (n <= 0) {
        std::cout << "Error. Enter positive number n.\n";
        return 1;
    }

    // ���������� ����� ���� � ����� ����������
    int result = calculateSum(n);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}

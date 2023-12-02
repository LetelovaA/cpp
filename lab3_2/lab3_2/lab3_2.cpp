#include <iostream>
#include <cmath>

// ������� 1: ��������� ����������� ������� pow
double cubicRootVariant1(double a) {
    return std::pow(a, 1.0 / 3);
}

// ������� 2: ������������ �������
double cubicRootVariant2(double a) {
    double x = a;  // ��������� �����������

    // ������������ ������� (��������� �� ����������)
    for (int i = 0; i < 100; ++i) {
        x = (2 * x + a / (x * x)) / 3;
    }

    return x;
}

int main() {
    double number;

    // ���� �����
    std::cout << "Enter a number to calculate the cube root: ";
    std::cin >> number;

    // ������� 1: ��������� ����������� ������� pow
    double result1 = cubicRootVariant1(number);
    std::cout << "Cube root (option 1): " << result1 << std::endl;

    // ������� 2: ������������ �������
    double result2 = cubicRootVariant2(number);
    std::cout << "Cube root (option 2): " << result2 << std::endl;

    return 0;
}

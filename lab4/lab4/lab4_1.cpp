#include <iostream>
#include <cmath>

// ������� ��� ���������� �������������� ������ ����������� ���������
int Myroot(double a, double b, double c, double& x1, double& x2) {
    // ��������� ������������
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // ��� �������������� �����
        x1 = (-b + std::sqrt(discriminant)) / (2 * a);
        x2 = (-b - std::sqrt(discriminant)) / (2 * a);
        return 1;  // ����� �������
    }
    else if (discriminant == 0) {
        // ���� �������������� ������
        x1 = -b / (2 * a);
        x2 = x1;
        return 0;  // ��� ����� ���������
    }
    else {
        // ������ ���
        return -1;
    }
}

int main() {
    double a, b, c, x1, x2;

    // ���� ������������� ����������� ���������
    std::cout << "Enter coefficients (a, b, c): ";
    std::cin >> a >> b >> c;

    // ���������� ��� �������� ���������� �������
    int result = Myroot(a, b, c, x1, x2);

    // ����� ����������
    if (result == 1) {
        std::cout << "Roots: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else if (result == 0) {
        std::cout << "Root�: x1 = x2 = " << x1 << std::endl;
    }
    else {
        std::cout << "No roots" << std::endl;
    }

    return 0;
}

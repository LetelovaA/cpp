#include <iostream>
#include <cmath>
// ��� ��������� ��������� �����
#include <cstdlib>
#include <ctime>

int main4_1() {
    const int numShots = 5;  // ������� ��������� ���������� ���������
    int totalScore = 0;

    std::cout << "Welcome to the darts program!\n";

    // ������������� ���������� ��������� �����
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // ��������� ��������� ��������� ������ ������
    int centerX = std::rand() % 10 + 1;  // �� 1 �� 100
    int centerY = std::rand() % 10 + 1;  // �� 1 �� 100

    std::cout << "Center of the target in the gap: x = 0; y = 0 and x = 10; y = 10 )\n";

    for (int i = 0; i < numShots; ++i) {
        int x, y;

        // ���� ��������� ��������
        std::cout << "Enter the coordinates of the shot " << i + 1 << " (x y): ";
        std::cin >> x >> y;

        // �������� ���������� �����
        int distance = std::sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));

        // ������ ������ � ����������� �� ���������� �� ������ ������

        int score;
        if (distance <= 10) {
            if (distance <= 5) {
                score = 10;  // ����� � �����
            }
            else {
                score = 5;   // ����� � ����
            }
        }
        else {
            score = 0;   // ��� ������
        }

        // ����� ���������� � ������� ��������
        std::cout << "Shot " << i + 1 << ": Score - " << score << "\n";

        // ���������� ������ �����
        totalScore += score;
    }

    // ����� ���������� � ����� ����� � ������ �������
    std::cout << "Total score: " << totalScore << "\n";

    // ����������� ������ �������
    if (totalScore >= 40) {
        std::cout << "Pro. Great shot!\n";
        std::cout << "Center of the target was in the gap: (" << centerX << ", " << centerY << ")\n";
    }
    else if (totalScore >= 20) {
        std::cout << "Good shot!\n";
        std::cout << "Center of the target was in the gap: (" << centerX << ", " << centerY << ")\n";
    }
    else {
        std::cout << "Rookie. Practice some more.!\n";
        std::cout << "Center of the target was in the gap: (" << centerX << ", " << centerY << ")\n";
    }

    return 0;
}

#include <iostream>
#include <cmath>
// Для генерации случайных чисел
#include <cstdlib>
#include <ctime>

int main4_1() {
    const int numShots = 5;  // Заранее известное количество выстрелов
    int totalScore = 0;

    std::cout << "Welcome to the darts program!\n";

    // Инициализация генератора случайных чисел
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Генерация случайных координат центра мишени
    int centerX = std::rand() % 10 + 1;  // От 1 до 100
    int centerY = std::rand() % 10 + 1;  // От 1 до 100

    std::cout << "Center of the target in the gap: x = 0; y = 0 and x = 10; y = 10 )\n";

    for (int i = 0; i < numShots; ++i) {
        int x, y;

        // Ввод координат выстрела
        std::cout << "Enter the coordinates of the shot " << i + 1 << " (x y): ";
        std::cin >> x >> y;

        // Имитация вычисления очков
        int distance = std::sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));

        // Расчет баллов в зависимости от расстояния от центра мишени

        int score;
        if (distance <= 10) {
            if (distance <= 5) {
                score = 10;  // Попал в центр
            }
            else {
                score = 5;   // Ближе к краю
            }
        }
        else {
            score = 0;   // Вне мишени
        }

        // Вывод информации о текущем выстреле
        std::cout << "Shot " << i + 1 << ": Score - " << score << "\n";

        // Обновление общего счета
        totalScore += score;
    }

    // Вывод информации о сумме очков и уровне стрелка
    std::cout << "Total score: " << totalScore << "\n";

    // Определение уровня стрелка
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

#include <iostream>
#include <string>
#include <cmath> 
using namespace std;
int main()
{
	// объ€вл€ем 10 переменных типа int - 5 пар координат п€тиугольника
	int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
	// ѕросим пользовател€ ввести координаты точек и инициализируем переменные
	cout << "Enter x1 y1";
	cin >> x1;
	cin >> y1;
	cout << "Enter x2 y2";
	cin >> x2;
	cin >> y2;
	cout << "Enter x3 y3";
	cin >> x3;
	cin >> y3;
	cout << "Enter x4 y4";
	cin >> x4;
	cin >> y4;
	cout << "Enter x5 y5";
	cin >> x5;
	cin >> y5;
	// объ€вл€ем и инициализируем переменную s вычисл€емой по формуле площади и выводим значение
	double s = (x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - y1 * x2 - y2 * x3 - y3 * x4 - y4 * x5 - y5 * x1) / 2;
	cout << "Calculated square - " << s;
}
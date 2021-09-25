//Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, distance;
	cout << "Введите поочередно координаты точки A" << endl;
	cin >> x1 >> y1;
	cout << "Введите поочередно координаты точки B" << endl;
	cin >> x2 >> y2;
	cout << endl << "A (" << x1 << ";" << y1 << ")  " << "B (" << x2 << ";" << y2 << ")" << endl;
	distance = sqrt((x2 * x2 - 2 * x2 * x1 + x1 * x1) + (y2 * y2 - 2 * y2 * y1 + y1 * y1)); // подсчитывается расстояние между отрезками согласно формуле sqrt((x2-x1)^2+(y2-y1)^2), причем, что сама формула расскладывается согласно квадрату разности
	cout << "Расстояние между точками A и B = " << distance << endl;
	return 0;
}
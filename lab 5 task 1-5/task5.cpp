// Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, y1, y2, y3, AB, BC, CA;
	cout << "Точки А, В, С -- вершины треугольника" << endl;
	cout << "Введите поочередно координаты точки A" << endl;
	cin >> x1 >> y1;
	cout << "Введите поочередно координаты точки B" << endl;
	cin >> x2 >> y2;
	cout << "Введите поочередно координаты точки C" << endl;
	cin >> x3 >> y3;
	AB = sqrt((x2 * x2 - 2 * x2 * x1 + x1 * x1) + (y2 * y2 - 2 * y2 * y1 + y1 * y1)); // подсчитывается расстояние между отрезками согласно формуле sqrt((x2-x1)^2+(y2-y1)^2), причем, что сама формула расскладывается согласно квадрату разности
	BC = sqrt((x3 * x3 - 2 * x3 * x2 + x2 * x2) + (y3 * y3 - 2 * y3 * y2 + y2 * y2));
	CA = sqrt((x1 * x1 - 2 * x3 * x1 + x3 * x3) + (y1 * y1 - 2 * y3 * y1 + y3 * y3));
	double P, S, p; 
	P = AB + BC + CA;
	p = P / 2;
	S = sqrt(p * (p - AB) * (p - BC) * (p - CA)); 
	cout << "Периметр треугольника = " << P << endl;
	cout << "Площадь треугольника = " << S << endl;
	return 0;
}
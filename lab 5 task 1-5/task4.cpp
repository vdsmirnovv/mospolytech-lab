// Даны координаты двух противоположных вершин прямоугольника:(x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат. Найти периметр и площадь данного прямоугольника.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x1, x2, y1, y2;
	cout << "Точки A и B две противоположные вершины прямоугольника" << endl;
	cout << "Введите поочередно координаты точки A" << endl;
	cin >> x1 >> y1;
	cout << "Введите поочередно координаты точки B" << endl;
	cin >> x2 >> y2;
	int side_widht, side_length;
	side_widht = abs(y2 - y1); // вычисление ширины прямоугольника
	side_length = abs(x2 - x1); // вычисление длины прямоугольника
	cout << "Площадь прямоугольника = " << side_length * side_widht << endl;
	cout << "Периметр прямоугольника = " << 2 * (side_length + side_widht) << endl;
	return 0;
}
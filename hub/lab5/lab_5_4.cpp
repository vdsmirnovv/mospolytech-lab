#include <cmath>

using namespace std;

void lab_5_4() {
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
}
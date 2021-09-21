// Даны стороны А и В прямоугольника, нужно вывести плоащидь и периметр фигуры

#include <iostream>
using namespace std;

int main() {
	double a, b;
	cout << "Storona A: ";
	cin >> a;
	cout << endl << "Storona B: ";
	cin >> b;
	cout << endl << "S = " << a * b << endl; // выводим площадь фигуры
	cout << "P = " << (a + b) * 2 << endl; // выводим периметр фигуры
	return 0;
}
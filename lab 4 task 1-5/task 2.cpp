// Дан диаметр окружности, найти её длину

#include <iostream>
using namespace std;

int main() {
	double d, L;
	const double pi = 3.14;
	cout << "Diametr: ";
	cin >> d;
	cout << endl << "L = " << pi * d << endl; // выводим длину окружности
	return 0;
}
// даны ненулевые числа а и б, вывести сумму, разность, частное, произведение их квадратов

#include <iostream>
using namespace std;

int main() {
	double a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << endl << "summa kvadratov = " << a * a + b * b << endl;
	cout << "raznost' kvadratov = " << a * a - b * b << endl;
	cout << "proizvedenie kvadratov = " << (a * a) * (b * b) << endl;
	cout << "chastnoe kvadratov = " << (a * a) / (b * b) << endl;
	return 0;
}
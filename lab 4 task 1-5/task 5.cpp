// даны ненулевые числа а и б, вывести сумму, разность, частное, произведение их модулей

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << endl << "summa modylei = " << abs(a) + abs(b) << endl;
	cout << "raznost' modylei = " << abs(a) - abs(b) << endl;
	cout << "proizvedenie modylei = " << abs(a) * abs(b) << endl;
	cout << "chastnoe modylei = " << abs(a) / abs(b) << endl;
	return 0;
}
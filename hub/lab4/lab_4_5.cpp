#include <cmath>

using namespace std;

void lab_4_5() {
	double a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << endl << "Сумма модулей = " << abs(a) + abs(b) << endl;
	cout << "Разность модулей = " << abs(a) - abs(b) << endl;
	cout << "Произведение модулей = " << abs(a) * abs(b) << endl;
	cout << "Частное модулей = " << abs(a) / abs(b) << endl;
}
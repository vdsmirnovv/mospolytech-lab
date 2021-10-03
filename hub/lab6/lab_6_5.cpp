#include <cmath>

using namespace std;

void lab_6_5() {
	double x, y;
	cout << "x = ";
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "y = " << y;
}
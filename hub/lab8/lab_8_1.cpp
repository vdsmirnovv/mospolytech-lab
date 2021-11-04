#include <cmath>
using namespace std;

void lab_8_1() {
	double bytes;
	cout << "Вес файла в байтах: ";
	cin >> bytes;
	cout << "Вес файла в килобайтах: " << ceil(bytes / 1024) << endl;
}
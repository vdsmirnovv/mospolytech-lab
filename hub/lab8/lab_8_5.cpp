#include <string>

using namespace std;

void lab_8_5() {
	string user_input;
	cout << "Введите число, в котором хотите произвести изменения согласно заданию: ";
	cin >> user_input;
	cout << user_input[1] << user_input[2] << user_input[0] << endl;
}
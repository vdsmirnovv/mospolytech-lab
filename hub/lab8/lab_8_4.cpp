#include <string>

using namespace std;

void lab_8_4() {
	string user_input;
	cout << "¬ведите любое двухзначное число, в котором хотите помен€ть цифры местами: ";
	cin >> user_input;
	cout << user_input[1] << user_input[0] << endl;
}
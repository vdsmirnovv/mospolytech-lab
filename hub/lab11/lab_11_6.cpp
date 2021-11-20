#include <string>

using namespace std;

void lab_11_6() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "Лабораторная работа №11. Задача №6" << endl;
		cout << "Дано целое число, лежащее в диапазоне 1–999. Вывести его строку-описание вида «четное двузначное число», «нечетное трехзначное число» и т. д." << endl << endl;
		string num;
		cout << "Введите число: ";
		cin >> num;
		if (stoi(num) % 2 == 0) {
			if (size(num) > 1) {
				if (size(num) > 2) {
					cout << "Четное трёхзначное число" << endl;
				}
				else {
					cout << "Четное двухзначное число" << endl;
				}
			}
			else {
				cout << "Четная цифра" << endl;
			}
		}
		else {
			if (size(num) > 1) {
				if (size(num) > 2) {
					cout << "Нечетное трёхзначное число" << endl;
				}
				else {
					cout << "Нечетное двухзначное число" << endl;
				}
			}
			else {
				cout << "Нечетная цифра" << endl;
			}
		}

		cout << "\nВведите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
		cin >> user_input;
	}
}
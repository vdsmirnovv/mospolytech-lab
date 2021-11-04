#include <string>

using namespace std;

void lab_10_3() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "Лабораторная работа №10. Задача №3" << endl;
		cout << "Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным»" << endl << endl;
		cout << "Введите число:" << endl;
		string num;
		cin >> num;
		if (size(num)==2 && stoi(num)%2==0) {
			cout << "Это число четное двухзначное" << endl << endl;
		}
		else {
			cout << "Это число не подходит под условие задачи" << endl << endl;
		}

		cout << "Введите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
		cin >> user_input;
	}
}
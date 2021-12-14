using namespace std;

void lab_13_1() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №13. Задача №1" << endl;
		cout << "Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет" << endl << endl;

		double price;
		cout << "Введите цену конфет: ";
		cin >> price;
		for (double i = 0.1; i <= 1; i += 0.1) {
			cout << "Стоимость " << i << "кг конфет = " << price * i << " рублей." << endl;
		}

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
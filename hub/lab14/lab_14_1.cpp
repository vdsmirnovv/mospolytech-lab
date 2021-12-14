using namespace std;

void lab_14_1() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №14. Задача №1" << endl;
		cout << "Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза)" << endl << endl;

		unsigned int a, b;
		cout << "Введите по очереди А и В:" << endl;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			for (int j = 0; j < i; j++) {
				cout << i << " ";
			}
			cout << endl;
		}

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
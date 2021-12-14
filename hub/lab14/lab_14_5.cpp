using namespace std;

void lab_14_5() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №14. Задача №5" << endl;
		cout << "Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида" << endl << endl;

		unsigned a, b;
		cout << "Введите по очереди числа A и B:" << endl;
		cin >> a >> b;
		while (a != 0 && b != 0) {
			if (a > b) a = a % b;
			else b = b % a;
		}
		cout << "НОД: " << a + b;

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
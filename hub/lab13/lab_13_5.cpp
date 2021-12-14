using namespace std;

void lab_13_5() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №13. Задача №5" << endl;
		cout << "Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения \n1 - A + A2 - A3 + . ..+= AN . \nУсловный оператор не использовать\n" << endl << endl;

		double sum = 0, a;
		int n;
		cout << "Введите по очереди числа А и N:" << endl;
		cin >> a >> n;
		for (int i = 0; i <= n; i++) {
			sum = sum + pow(-a, i);
		}
		cout << "Ответ: " << sum << endl;

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
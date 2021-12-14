using namespace std;

void lab_13_2() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №13. Задача №2" << endl;
		cout << "Дано целое число N (> 0). Найти произведение 1.1 x 1.2 x 1.3 x . . . (N сомножителей)" << endl << endl;

		int n;
		double result = 1;
		cout << "Введите N: ";
		cin >> n;
		for (int i = 1; i <= n; i++) {
			result = result * (1 + 0.1 * i);
		}
		cout << "Ответ = " << result << endl;

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
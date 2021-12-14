using namespace std;

int Sign(double x) {
	if (x > 0) return 1;
	if (x < 0) return -1;
	if (x == 0) return 0;
}

void lab_15_2() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №15. Задача №2" << endl;
		cout << "Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:\n−1, если X < 0; 0, если X = 0; 1, если X > 0.\nС помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B" << endl << endl;

		double user_input_a, user_input_b;
		int result;
		cout << "Введите числа А и В: " << endl;
		cin >> user_input_a >> user_input_b;
		result = Sign(user_input_a) + Sign(user_input_b);
		cout << "Результат: " << result;

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
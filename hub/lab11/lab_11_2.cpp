using namespace std;

void lab_11_2() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "Лабораторная работа №11. Задача №2" << endl;
		cout << "Даны три числа. Найти сумму двух наибольших из них" << endl << endl;
		int a, b, c;
		cout << "Введите по очереди значения трёх чисел:" << endl;
		cin >> a >> b >> c;
		if (b <= c && b <= a) {
			cout << a + c << endl;
		}
		else {
			if (a <= c && a <= b) {
				cout << b + c << endl;
			}
			else {
				cout << b + a << endl;
			}
		}

		cout << "\nВведите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
		cin >> user_input;
	}
}
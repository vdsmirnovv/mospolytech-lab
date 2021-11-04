using namespace std;

void lab_10_7() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "Лабораторная работа №10. Задача №7" << endl;
		cout << "Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c»" << endl << endl;
		cout << "Введите последовательно a, b, c:" << endl;
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a && (a > 0 && b > 0 && c > 0)) {
			cout << "Такой треугольник существует" << endl << endl;
		}
		else {
			cout << "Такого треугольника не может быть" << endl << endl;
		}

		cout << "Введите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
		cin >> user_input;
	}
}
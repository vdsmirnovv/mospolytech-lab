using namespace std;

int Quarter(double x, double y) {
	if (x > 0) {
		if (y > 0) {
			return 1;
		}
		else {
			return 4;
		}
	}
	else {
		if (y > 0) {
			return 2;
		}
		else {
			return 3;
		}
	}
}

void lab_15_4() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №15. Задача №4" << endl;
		cout << "Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами" << endl << endl;
		for (int i = 0; i < 3; i++) {
			double x, y;
			cout << "Введите по очереди х и у точки:" << endl;
			cin >> x >> y;
			int result = Quarter(x, y);
			cout << "Номер четверти этой точки = " << result << endl;
		}

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
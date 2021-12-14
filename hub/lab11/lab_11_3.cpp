#include <cmath>

using namespace std;

void lab_11_3() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "Лабораторная работа №11. Задача №3" << endl;
		cout << "На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A" << endl << endl;
		double x_a, y_a, x_b, y_b, x_c, y_c;
		cout << "Введите координаты точки А: " << endl;
		cin >> x_a >> y_a;
		cout << "Введите координаты точки B: " << endl;
		cin >> x_b >> y_b;
		cout << "Введите координаты точки C: " << endl;
		cin >> x_c >> y_c;
		double db, dc;
		db = sqrt(pow((x_a - x_b), 2) + pow((y_a - y_b), 2));
		dc = sqrt(pow((x_a - x_c), 2) + pow((y_a - y_c), 2));
		if (db > dc) {
			cout << "Точка C ближе к точке А. Расстояние между точками: " << dc << endl;
		}
		else {
			cout << "Точка B ближе к точке А. Расстояние между точками: " << db << endl;
		}

		cout << "\nВведите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
		cin >> user_input;
	}
}
#include <vector>

using namespace std;

void lab_16_2() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №16. Задача №2" << endl;
		cout << "Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, AxD, AxD2 , AxD3 , ..." << endl << endl;

		vector <int> data_array;
		int a, d, n;
		cout << "Введите размер массива: ";
		cin >> n;
		cout << "Введите первый член геометрической прогрессии: ";
		cin >> a;
		cout << "Введите знаменатель этой прогрессии: ";
		cin >> d;
		for (int i = 0; i < n; i++) {
			data_array.push_back(a * pow(d, i));
		}
		for (int i = 0; i < data_array.size(); i++) {
			cout << data_array[i] << " ";
		}

		cout << "\n\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
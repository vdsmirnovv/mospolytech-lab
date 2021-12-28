#include <vector>

using namespace std;

void lab_16_1() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №16. Задача №1" << endl;
		cout << "Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, ..." << endl << endl;
		
		vector <int> data_array;
		int n, temp=1;
		cout << "Введите размер массива N: ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			data_array.push_back(temp);
			temp += 2;
		}
		for (int i = 0; i < data_array.size(); i++) {
			cout << data_array[i] << " ";
		}

		cout << "\n\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
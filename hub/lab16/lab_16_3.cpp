#include <vector>
#include <numeric>

using namespace std;

void lab_16_3() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №16. Задача №3" << endl;
		cout << "Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих" << endl << endl;

		vector <int> data_array;
		int a, b, n;
		cout << "Введите размер массива: ";
		cin >> n;
		cout << "Введите по очереди числа А и В:" << endl;
		cin >> a >> b;
		data_array.push_back(a);
		data_array.push_back(b);
		for (int i = 2; i < n; i++) {
			data_array.push_back(accumulate(data_array.begin(), data_array.end(), 0));
		}
		for (int i = 0; i < data_array.size(); i++) {
			cout << data_array[i] << " ";
		}

		cout << "\n\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
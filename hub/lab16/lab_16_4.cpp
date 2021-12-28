#include <vector>

using namespace std;

void lab_16_4() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №16. Задача №4" << endl;
		cout << "Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2" << endl << endl;

		vector <int> data_array;
		int n, temp;
		cout << "Введите размер массива: ";
		cin >> n;
		cout << "А теперь заполните этот массив: " << endl;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			data_array.push_back(temp);
		}
		cout << "Ваш массив: ";
		for (int i = 0; i < data_array.size(); i++) cout << data_array[i] << " ";
		cout << "\nВывод элементов в нужном порядке:" << endl;
		for (int i = 0; i < data_array.size(); i++) {
			cout << data_array[i] << " " << data_array[n - i - 1] << " ";
		}

		cout << "\n\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
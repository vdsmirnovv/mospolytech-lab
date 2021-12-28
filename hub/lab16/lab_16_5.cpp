#include <vector>

using namespace std;

void lab_16_5() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №16. Задача №5" << endl;
		cout << "Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров" << endl << endl;

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
		for (int i = 1; i < data_array.size(); i++) {
			if (i % 2 == 1) cout << data_array[i] << " ";
		}
		for (int i = data_array.size()-1; i >= 0; i--) {
			if (i % 2 == 0) cout << data_array[i] << " ";
		}

		cout << "\n\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
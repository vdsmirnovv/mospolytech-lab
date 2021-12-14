using namespace std;

void lab_14_2() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №14. Задача №2" << endl;
		cout << "Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Не используя операции умножения и деления, найти длину незанятой части отрезка A" << endl << endl;

		unsigned int a, b, count_b, temp;
		int sum;
		cout << "Введите по очереди А и В:" << endl;
		cin >> a >> b;
		temp = a;
		for (count_b = 0; temp >= b; count_b++) {
			temp -= b;
		}
		while (count_b > 0) {
			a = a - b;
			count_b--;
		}
		cout << "Остаток отрезка А: " << a;

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
using namespace std;

void lab_13_3() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №13. Задача №3" << endl;
		cout << "Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N^2 = 1 + 3 + 5 + . . . + (2xN - 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы" << endl << endl;

		double result;
		int n;
		cout << "Введите число N: ";
		cin >> n;
		result = 0;
		for (int i = 1; i <= (2 * n - 1); i += 2){
			result += i;
			cout << result << endl;
		}

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
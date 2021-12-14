using namespace std;

void lab_14_6() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №14. Задача №6" << endl;
		cout << "Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K - порядковый номер числа Фибоначчи N" << endl << endl;

        int n;
        cout << "Введите N: ";
        cin >> n;
        int f1 = 1, f2 = 1, f = 0, k = 2;
        while (f < n) {
            ++k;
            f = f2 + f1;
            f2 = f1;
            f1 = f;
        }
        cout << "k = " << k << endl;

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
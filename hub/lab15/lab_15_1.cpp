using namespace std;

double PowerA3(double a) {
	return a * a * a;
}

void lab_15_1() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Ћабораторна€ работа є15. «адача є1" << endl;
		cout << "ќписать функцию PowerA3(A, B), вычисл€ющую третью степень числа A и возвращающую ее в переменной B (A Ч входной, B Ч выходной параметр; оба параметра €вл€ютс€ вещественными). — помощью этой функции найти третьи степени п€ти данных чисел." << endl << endl;

		double userinp;
		for (int i = 0; i < 5; i++) {
			cout << "¬ведите число ј: ";
			cin >> userinp;
			double b = PowerA3(userinp);
			cout << "“реть€ степень этого числа: " << b << endl;
		}

		cout << "\n¬ведите 0 дл€ выхода из задачи или любой другой знак дл€ перезапуска этой задачи: ";
		cin >> user_input;
	}
}
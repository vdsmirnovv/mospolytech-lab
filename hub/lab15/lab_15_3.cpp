using namespace std;

double RingS(double R1, double R2) {
	return 3.14 * R1 * R1 - 3.14 * R2 * R2;
}

void lab_15_3() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Лабораторная работа №15. Задача №3" << endl;
		cout << "Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы" << endl << endl;
		double R1, R2, y, i;
		for (i = 0; i < 3; i++)
		{
			cout << "Введите R1 и R2 (R1 > R2):" << endl;
			cin >> R1 >> R2;
			y = RingS(R1, R2);
			cout << y << endl;
		}		

		cout << "\nВведите 0 для выхода из задачи или любой другой знак для перезапуска этой задачи: ";
		cin >> user_input;
	}
}
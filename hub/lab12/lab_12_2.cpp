using namespace std;

void lab_12_2() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "Лабораторная работа №12. Задача №2" << endl;
		cout << "Робот может перемещаться в четырех направлениях («N» - север, «W» - запад, «S» - юг, «E» - восток) и принимать три цифровые команды: 0 - продолжать движение, 1 - поворот налево, -1 - поворот направо. Дан символ C - исходное направление робота и целое число N - посланная ему команда. Вывести направление робота после выполнения полученной команды" << endl << endl;
        int n;
        char c;

        cout << "Направление: ";
        cin >> c;
        cout << "Операция: ";
        cin >> n;

        switch (c) {
        case 'N':
            switch (n) {
            case 1:
                cout << "Запад";
                break;
            case 0:
                cout << "Север";
                break;
            case -1:
                cout << "Восток";
                break;
            }
            break;
        case 'E':
            switch (n) {
            case 1:
                cout << "Север";
                break;
            case 0:
                cout << "Восток";
                break;
            case -1:
                cout << "Юг";
                break;
            }
        case 'S':
            switch (n) {
            case 1:
                cout << "Восток";
                break;
            case 0:
                cout << "Юг";
                break;
            case -1:
                cout << "Запад";
                break;
            }
            break;
        case 'W':
            switch (n) {
            case 1:
                cout << "Юг";
                break;
            case 0:
                cout << "Запад";
                break;
            case -1:
                cout << "Север";
                break;
            }
        }

		cout << endl << "Введите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
		cin >> user_input;
	}
}
using namespace std;

void day_f(int y) {
	switch (y)
	{
	case 1:
		cout << "Первое ";
		break;
	case 2:
		cout << "Второе ";
		break;
	case 3:
		cout << "Третье ";
		break;
	case 4:
		cout << "Четвёртое ";
		break;
	case 5:
		cout << "Пятое ";
		break;
	case 6:
		cout << "Шестое ";
		break;
	case 7:
		cout << "Седьмое ";
		break;
	case 8:
		cout << "Восьмое ";
		break;
	case 9:
		cout << "Девятое ";
		break;
	case 10:
		cout << "Десятое ";
		break;
	case 11:
		cout << "Одиннадцатое ";
		break;
	case 12:
		cout << "Двенадцатое ";
		break;
	case 13:
		cout << "Тринадцатое ";
		break;
	case 14:
		cout << "Четырнадцатое ";
		break;
	case 15:
		cout << "Пятнадцатое ";
		break;
	case 16:
		cout << "Шестнадцатое ";
		break;
	case 17:
		cout << "Семнадцатое ";
		break;
	case 18:
		cout << "Восемнадцатое ";
		break;
	case 19:
		cout << "Девятнадцатое ";
		break;
	case 20:
		cout << "Двадцатое";
		break;
	case 21:
		cout << "Двадцать первое ";
		break;
	case 22:
		cout << "Двадцать второе ";
		break;
	case 23:
		cout << "Двадцать третье ";
		break;
	case 24:
		cout << "Двадцать четвёртое ";
		break;
	case 25:
		cout << "Двадцать пятое ";
		break;
	case 26:
		cout << "Двадцать шестое ";
		break;
	case 27:
		cout << "Двадцать седьмое ";
		break;
	case 28:
		cout << "Двадцать восьмое ";
		break;
	case 29:
		cout << "Двадцать девятое ";
		break;
	case 30:
		cout << "Тридцатое ";
		break;
	case 31:
		cout << "Тридцать первое ";
		break;
	}
}

void month_f(int x) {
	switch (x)
	{
	case 1:
		cout << "января" << endl;
		break;
	case 2:
		cout << "февраля" << endl;
		break;
	case 3:
		cout << "марта" << endl;
		break;
	case 4:
		cout << "апреля" << endl;
		break;
	case 5:
		cout << "мая" << endl;
		break;
	case 6:
		cout << "июня" << endl;
		break;
	case 7:
		cout << "июля" << endl;
		break;
	case 8:
		cout << "августа" << endl;
		break;
	case 9:
		cout << "сентября" << endl;
		break;
	case 10:
		cout << "октября" << endl;
		break;
	case 11:
		cout << "ноября" << endl;
		break;
	case 12:
		cout << "декабря" << endl;
		break;
	}
}

void lab_12_1() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "Лабораторная работа №12. Задача №1" << endl;
		cout << "Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»)" << endl << endl;
		int day, month;
		cout << "Введите по очереди значения дня и месяца:" << endl;
		cin >> day >> month;
		day_f(day); month_f(month);

		cout << endl << "Введите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
		cin >> user_input;
	}
}
using namespace std;

void lab_12_3() {
    int user_input = 1;
    while (user_input != 0) {
        system("cls");

        cout << "Лабораторная работа №12. Задача №3" << endl;
        int num;
        cout << "Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий»" << endl << endl;
        cout << "Введите число в диапазоне 10–40: ";
        cin >> num;
        switch (num)
        {
        case 10: cout << "Десять"; break;
        case 11: cout << "Одиннадцать"; break;
        case 12: cout << "Двенадцать"; break;
        case 13: cout << "Тринадцать"; break;
        case 14: cout << "Четырнадцать"; break;
        case 15: cout << "Пятнадцать"; break;
        case 16: cout << "Шетнадцать"; break;
        case 17: cout << "Семнадцать"; break;
        case 18: cout << "Восемнадцать"; break;
        case 19: cout << "Девятнадцать"; break;
        case 20: cout << "Двадцать"; break;
        case 21: cout << "Двадцать одно"; break;
        case 22: cout << "Двадцать два"; break;
        case 23: cout << "Двадцать три"; break;
        case 24: cout << "Двадцать четыре"; break;
        case 25: cout << "Двадцать пять"; break;
        case 26: cout << "Двадцать шесть"; break;
        case 27: cout << "Двадцать семь"; break;
        case 28: cout << "Двадцать восемь"; break;
        case 29: cout << "Двадцать девять"; break;
        case 30: cout << "Тридцать"; break;
        case 31: cout << "Тридцать одно"; break;
        case 32: cout << "Тридцать два"; break;
        case 33: cout << "Тридцать три"; break;
        case 34: cout << "Тридцать четыре"; break;
        case 35: cout << "Тридцать пять"; break;
        case 36: cout << "Тридцать шесть"; break;
        case 37: cout << "Тридцать семь"; break;
        case 38: cout << "Тридцать восеь"; break;
        case 39: cout << "Тридцать девять"; break;
        case 40: cout << "Сорок"; break;
        }
        if ((num > 40) || (num < 10)) cout << "Число выходит за рамки диапазона";
        if (((num >= 10) && (num <= 20)) || ((num >= 25) && (num <= 30)) || ((num >= 35) && (num <= 40)))
            cout << " учебных заданий";
        if ((num == 31) || (num == 21))
            cout << " учебное задание";
        if ((num == 22) || (num == 23) || (num == 24) || (num == 32) || (num == 33) || (num == 34))
            cout << " учебных задания";

        cout << endl << "\nВведите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
        cin >> user_input;
    }
}
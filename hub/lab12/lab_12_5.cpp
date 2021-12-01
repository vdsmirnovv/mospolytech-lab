using namespace std;

void lab_12_5() {
    int user_input = 1;
    while (user_input != 0) {
        system("cls");

        cout << "Лабораторная работа №12. Задача №5" << endl;
        cout << "В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы»" << endl << endl;
        int year;
        cout << "Введите год: ";
        cin >> year;

        cout << "Год ";

        switch ((year) % 10) {
        case 0:
        case 1:
            cout << "бел";
            break;
        case 2:
        case 3:
            cout << "черн";
            break;
        case 4:
        case 5:
            cout << "зелён";
            break;
        case 6:
        case 7:
            cout << "красн";
            break;
        case 8:
        case 9:
            cout << "жёлт";
            break;
        }

        switch ((year + 1) % 5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 9:
        case 10:
        case 11:
            cout << "ой ";
            break;
        case 6:
        case 7:
        case 8:
            cout << "ого ";
            break;
        }

        switch ((year + 8) % 12) {
        case 0:
            cout << "крысы";
            break;
        case 1:
            cout << "коровы";
            break;
        case 2:
            cout << "тигра";
            break;
        case 3:
            cout << "зайца";
            break;
        case 4:
            cout << "дракона";
            break;
        case 5:
            cout << "змеи";
            break;
        case 6:
            cout << "лошади";
            break;
        case 7:
            cout << "овцы";
            break;
        case 8:
            cout << "обезьяны";
            break;
        case 9:
            cout << "курицы";
            break;
        case 10:
            cout << "собаки";
            break;
        case 11:
            cout << "свиньи";
            break;
        }

        cout << endl << "\nВведите 0 для выхода из задачи или любое другое число для запуска этой задачи заново: ";
        cin >> user_input;
    }
}
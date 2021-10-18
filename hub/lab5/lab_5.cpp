#include "lab_5_1.cpp"
#include "lab_5_2.cpp"
#include "lab_5_3.cpp"
#include "lab_5_4.cpp"
#include "lab_5_5.cpp"

using namespace std;

int user_input_lab_5 = 1;

void user_fall_lab_5() {
    while (user_input_lab_5 < 0 || user_input_lab_5 > 5) {
        cout << endl << "!! Введите другое число, равное задачи !!" << endl;
        cout << "Введите номер нужной работы или введите 0 для завершения программы: ";
        cin >> user_input_lab_5;
    }
}

void lab_5() {
    system("cls");
    cout << "Лабораторная работа №5\nВведите номер задачи, чтобы запустить её" << endl;
    cout << endl << "1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)\n2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму\n3. Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B.Найти произведение длин отрезков AC и BC" << endl;
    cout << "4. Даны координаты двух противоположных вершин прямоугольника:(x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат. Найти P и S\n5. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь" << endl;
    while (user_input_lab_5 != 0) {
        cout << endl << "Введите номер нужной задачи или введите 0 для закрытия лаб. работы: ";
        cin >> user_input_lab_5;
        user_fall_lab_5();
        switch (user_input_lab_5) {
        case 1:
            lab_5_1();
            break;
        case 2:
            lab_5_2();
            break;
        case 3:
            lab_5_3();
            break;
        case 4:
            lab_5_4();
            break;
        case 5:
            lab_5_5();
            break;
        }
    }
    system("cls");
}
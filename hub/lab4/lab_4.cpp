#include "lab_4_1.cpp"
#include "lab_4_2.cpp"
#include "lab_4_3.cpp"
#include "lab_4_4.cpp"
#include "lab_4_5.cpp"

using namespace std;

int user_input_lab_4 = 1;

void user_fall_lab_4() {
    while (user_input_lab_4 < 0 || user_input_lab_4 > 5) {
        cout << endl << "!! Введите другое число, равное задачи !!" << endl;
        cout << "Введите номер нужной работы или введите 0 для завершения программы: ";
        cin >> user_input_lab_4;
    }
}

void lab_4() {
    system("cls");
    cout << "Лабораторная работа №4\nВведите номер задачи, чтобы запустить её" << endl;
    cout << endl << "1. Даны стороны прямоугольника a и b. Найти его площадь и периметр\n2. Дан диаметр окружности d. Найти ее длину\n3. Даны два числа a и b. Найти их среднее арифметическое" << endl;
    cout << "4. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов\n5. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей" << endl;
    while (user_input_lab_4 != 0) {
        cout << endl << "Введите номер нужной задачи или введите 0 для закрытия лаб. работы: ";
        cin >> user_input_lab_4;
        user_fall_lab_4();
        switch (user_input_lab_4) {
        case 1:
            lab_4_1();
            break;
        case 2:
            lab_4_2();
            break;
        case 3:
            lab_4_3();
            break;
        case 4:
            lab_4_4();
            break;
        case 5:
            lab_4_5();
            break;
        }
    }
    system("cls");
}
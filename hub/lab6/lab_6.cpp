#include <iostream>
#include "lab_6_1.cpp"
#include "lab_6_2.cpp"
#include "lab_6_3.cpp"
#include "lab_6_4.cpp"
#include "lab_6_5.cpp"
#include "lab_6_6.cpp"
#include "lab_6_7.cpp"

using namespace std;

int user_input_lab_6 = 1;

void user_fall_lab_6() {
    if (user_input_lab_6 != 1 && user_input_lab_6 != 2 && user_input_lab_6 != 3 && user_input_lab_6 != 4 && user_input_lab_6 != 5 && user_input_lab_6 != 6 && user_input_lab_6 != 7 && user_input_lab_6 != 0) {
        cout << endl << "!! Введите другое число, равное номеру задачи !!" << endl;
        cout << endl << "Введите номер нужной задачи или введите 0 для закрытия лаб. работы: ";
        cin >> user_input_lab_6;
    }
}

void lab_6() {
    cout << "Лабораторная работа №6\nВведите номер задачи, чтобы запустить её" << endl;
    cout << endl << "1. Поменять местами содержимое переменных A и B и вывести новые значения A и B\n2. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B - в C, C - в A, и вывести новые значения переменных A, B, C" << endl;
    cout << "3. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C - в B, B - в A, и вывести новые значения переменных A, B, C\n4.Найти значение функции y = 3x^6 - 6x^2 - 7 при данном значении x" << endl;
    cout << "5. Найти значение функции y = 4*(x-3)^6 - 7*(x-3)^3 + 2 при данном значении x\n6. Дано число A. Вычислить A^8 , используя вспомогательную переменную и три операции умножения\n7. Дано число A. Вычислить A^15, используя две вспомогательные переменные и пять операций умножения" << endl;
    while (user_input_lab_6 != 0) {
        cout << endl << "Введите номер нужной задачи или введите 0 для закрытия лаб. работы: ";
        cin >> user_input_lab_6;
        user_fall_lab_4();
        switch (user_input_lab_6) {
        case 1:
            lab_6_1();
            break;
        case 2:
            lab_6_2();
            break;
        case 3:
            lab_6_3();
            break;
        case 4:
            lab_6_4();
            break;
        case 5:
            lab_6_5();
            break;
        case 6:
            lab_6_6();
            break;
        case 7:
            lab_6_7();
            break;
        }
    }
}
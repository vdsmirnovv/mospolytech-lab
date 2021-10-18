#include <iostream>

// подключение модулей лабораторных работ
#include "lab4/lab_4.cpp"
#include "lab5/lab_5.cpp"
#include "lab6/lab_6.cpp"
#include "lab7/lab_7.cpp"
#include "lab8/lab_8.cpp"

using namespace std;

int user_input = 1;

void user_fall() {
    while (user_input != 0 && (user_input < 4 || user_input > 8)) {
        cout << endl << "!! Введите другое число, равное номеру лаб. работы !!" << endl;
        cout << "Введите номер нужной работы или введите 0 для завершения программы: ";
        cin >> user_input;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Добро пожаловать в хаб лабораторных работ, выполненных Вадимом Смирновым. Просто ознакомься со списком работ\nи введи нужную, чтобы посмотреть её.\n" << endl;
    while (user_input != 0) {
        cout << "Лабораторная работа №4\nЛабораторная работа №5\nЛабораторная работа №6\nЛабораторная работа №7\nЛабораторная работа №8" << endl;
        cout << endl << "Введите номер нужной работы или введите 0 для завершения программы: ";
        cin >> user_input;
        user_fall();
        switch (user_input) {
        case 4:
            lab_4();
            break;
        case 5:
            lab_5();
            break;
        case 6:
            lab_6();
            break;
        case 7:
            lab_7();
            break;
        case 8:
            lab_8();
            break;
        }
    }
}
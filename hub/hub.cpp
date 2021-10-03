#include <iostream>
#include "lab4/lab_4.cpp" 
#include "lab5/lab_5.cpp"
#include "lab6/lab_6.cpp"

using namespace std;

int user_input = 1;

void user_fall() {
    if (user_input != 4 && user_input != 5 && user_input != 6 && user_input != 0) {
        cout << endl << "!! Введите другое число, равное номеру лаб. работы !!" << endl;
        cout << endl << "Введите номер нужной работы или введите 0 для завершения программы: ";
        cin >> user_input;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Добро пожаловать в хаб лабораторных работ, выполненных Вадимом Смирновым. Просто ознакомься со списком работ\nи введи нужную, чтобы посмотреть её." << endl;
    cout << endl << "Лабораторная работа №4\nЛабораторная работа №5\nЛабораторная работа №6" << endl;
    while (user_input != 0) {
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
        }
    }
}
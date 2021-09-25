// Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "___A____B____C___" << endl << endl;
    cout << "Введите координаты точек по порядку на числовой прямой" << endl;
    cin >> A >> B >> C;
    cout << endl << "Длина отрезка AC = " << C - A << endl;
    cout << "Длина отрезка BC = " << C - B << endl;
    cout << "Сумма длин отрезков AC и BC = " << (C - A) + (C - B) << endl;
    return 0;
}
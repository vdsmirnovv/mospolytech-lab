// Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B.Найти произведение длин отрезков AC и BC


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "___A____C____B___" << endl << endl;
    cout << "Введите координаты точек по порядку на числовой прямой" << endl;
    cin >> A >> C >> B;
    cout << endl << "___A____C____B___" << endl;
    cout << "   " << A << "    "<< C <<"    "<< B << "   " << endl;
    cout << endl << "Длина отрезка AC = " << C - A << endl;
    cout << "Длина отрезка BC = " << B - C << endl;
    cout << "Сумма длин отрезков AC и BC = " << (C - A) + (B - C) << endl;
    return 0;
}
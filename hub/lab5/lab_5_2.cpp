using namespace std;

void lab_5_2() {
    int A, B, C;
    cout << "___A____B____C___" << endl << endl;
    cout << "Введите координаты точек по порядку на числовой прямой" << endl;
    cin >> A >> B >> C;
    cout << endl << "Длина отрезка AC = " << C - A << endl;
    cout << "Длина отрезка BC = " << C - B << endl;
    cout << "Сумма длин отрезков AC и BC = " << (C - A) + (C - B) << endl;
}
using namespace std;

double Fact2(int N) {
    int j;
    double k;
    k = 1;
    if (N % 2 == 0)
    {
        for (j = 2; j <= N; j += 2) k = k * j;
    }
    if (N % 2 != 0)
    {
        for (j = 1; j <= N; j += 2) k = k * j;
    }
    return k;
}

void lab_15_5() {
	string user_input = "";
	while (user_input != "0") {
		system("cls");

		cout << "Ћабораторна€ работа є15. «адача є5" << endl;
		cout << "ќписать функцию Fact2(N) вещественного типа, вычисл€ющую двойной факториал: \nN!!= 1x3x5x. ..xN, если N Ч нечетное;\nN!!= 2x4x6Ј. ..xN, если N Ч четное(N > 0 Ч параметр целого типа; вещественное возвращаемое значение используетс€ дл€ того, чтобы избежать целочисленного переполнени€ при больших значени€х N)" << endl << endl;
        int n;
        cout << "¬ведите N (N > 0): ";
        cin >> n;
        double result = Fact2(n);
        cout << "–езультат = " << result;

		cout << "\n¬ведите 0 дл€ выхода из задачи или любой другой знак дл€ перезапуска этой задачи: ";
		cin >> user_input;
	}
}
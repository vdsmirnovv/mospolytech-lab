using namespace std;

void lab_10_2() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �10. ������ �2" << endl;
		cout << "���� ��� ����� �����: A, B, C. ��������� ���������� ������������: ������������ ������� ����������� A < B < C�" << endl << endl;
		cout << "������� ����� �, B � � �� �������:" << endl;
		int a, b, c;
		cin >> a >> b >> c;
		if (a < b && b < c) {
			cout << "������� ����������� �����������." << endl << endl;
		}
		else {
			cout << "������� ����������� �� �����������" << endl << endl;
		}

		cout << "������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}
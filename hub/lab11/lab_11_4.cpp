using namespace std;

void lab_11_4() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �11. ������ �4" << endl;
		cout << "���� ���������� �����, �� ������� �� ������������ ���� OX � OY. ���������� ����� ������������ ��������, � ������� ��������� ������ �����" << endl << endl;
		int x, y;
		cout << "������� �� ������� � � � �����:" << endl;
		cin >> x >> y;
		if (x > 0) {
			if (y > 0) {
				cout << "����� � ������������ (" << x << ";" << y << ") ����������� � 1 ��������" << endl;
			}
			else {
				cout << "����� � ������������ (" << x << ";" << y << ") ����������� � 4 ��������" << endl;
			}
		}
		else {
			if (y > 0) {
				cout << "����� � ������������ (" << x << ";" << y << ") ����������� � 2 ��������" << endl;
			}
			else {
				cout << "����� � ������������ (" << x << ";" << y << ") ����������� � 3 ��������" << endl;
			}
		}

		cout << "\n������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}
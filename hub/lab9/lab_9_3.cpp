using namespace std;

void lab_9_3() {
	int user_input = 1;
	while (user_input != 0) {
		system("cls");

		cout << "������������ ������ �9. ������ �3" << endl;
		cout << "��� ������ ������������� ��������� �������: 1 � �����������, 2 � �������, . . . , 6 � �������, 7 � �����������. ���� ����� ����� K, ������� � ��������� 1�365, � ����� ����� N, ������� � ��������� 1�7. ���������� ����� ��� ������ ��� K-�� ��� ����, ���� ��������, ��� � ���� ���� 1 ������ ���� ���� ������ � ������� N" << endl << endl;
		cout << "������� ����� ���, ��� �������� ������ ������ ����� ��� ������, � ����� ������� ����� ��� ������, ������� ���� 1 ������ ����� ����:" << endl;
		int k, n;
		cin >> k >> n;
		if (k < 366 && k >0 && n < 8 && n > 0) {
			cout << "����� ��� ������: " << (k + n - 2) % 7 + 1 << endl << endl;
		}
		else {
			cout << "!! ������ !!\n � ������ ���� � ���������� 1-365 ���/� N ������ ���� � ���������� 1-7, ��������� ��������� ������." << endl;
		}

		cout << "������� 0 ��� ������ �� ������ ��� ����� ������ ����� ��� ������� ���� ������ ������: ";
		cin >> user_input;
	}
}
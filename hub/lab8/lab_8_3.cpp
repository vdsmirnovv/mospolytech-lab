using namespace std;

void lab_8_3() {
	int a, b;
	cout << "������� ������� ����� ������� A, � ����� ����� ������� �. �������, ��� A > B" << endl;
	cin >> a >> b;
	if (a < b) {
		cout << "!! ������ !!\n� ������ ���� ������ �\n\n������� ������ ������(������� �, ����� �)" << endl;
		cin >> a >> b;
	}
	cout << "�� ������� ����� ������� � = " << a % b << endl;
}
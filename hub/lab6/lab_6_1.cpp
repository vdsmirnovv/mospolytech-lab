using namespace std;

void lab_6_1() {
	int a, b;
	cout << "Введите сначало число А, а потом число В" << endl;
	cin >> a >> b;
	int temp = b;
	b = a;
	a = temp;
	cout << a << " " << b;
}
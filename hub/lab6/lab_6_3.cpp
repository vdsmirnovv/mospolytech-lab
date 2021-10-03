using namespace std;

void lab_6_3() {
	int a, b, c;
	cout << "¬ведите по очереди числа A, B, C" << endl;
	cin >> a >> b >> c;
	int temp = c;
	c = a;
	a = b;
	b = temp;
	cout << a << " " << b << " " << c << endl;
}
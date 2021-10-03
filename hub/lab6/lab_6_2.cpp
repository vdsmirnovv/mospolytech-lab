using namespace std;

void lab_6_2() {
	int a, b, c;
	cout << "¬ведите по очереди числа A, B, C" << endl;
	cin >> a >> b >> c;
	int temp = b;
	b = a;
	a = c;
	c = temp;
	cout << a << " " << b << " " << c << endl;
}
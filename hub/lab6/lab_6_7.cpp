using namespace std;

void lab_6_7() {
	int a, b, c;
	cout << "A = ";
	cin >> a;
	b = a * a;
	c = b * a;
	b = b * c;
	c = b * b;
	b = b * c;
	cout << "A^15 = " << b << endl;
}
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int a;
	cout << "������� �����:";
	cin >> a;
	cout << "������ ������:" << a << "*1" << endl;
	cout << "�����:";

	int b;
	cin >> b;
	if (b == a * 1) {
		cout << "�����!";
	}

	else if (b != a * 1) {
		cout << "�������.";
	}

	cout << "������ ������:" << b << "*2" << endl;
	cout << "�����:";
	int c;
	cin >> c;

	if (c == b * 2) {
		cout << "�����!";
	}

	else if (c != b * 2) {
		cout << "�������.";
	}
	return 0;
}
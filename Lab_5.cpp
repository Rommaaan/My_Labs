#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	string a;
	int b, c;
	cout << "������� ��������:" << endl;
	cin >> a;
	cout << "������� ����� �1:" << endl;
	cin >> b;
	cout << "������� ����� �2" << endl;
	cin >> c;

	int res;
	if (a == "/" and b == 0) {
		cout << "������ �� 0 ������!" << endl;
		return 0;
	}

	else if (a == "+") {
		res = b + c;
	}

	else if (a == "*") {
		res = b * c;
	}

	else if (a == "/") {
		res = b / c;
	}

	else if (a == "-") {
		res = b - c;
	}

	else if (a == "%") {
		res = b % c;
	}

	cout << "���������:" << b << a << c << "=" << res;
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	string a;
	int b, c;
	cout << "Введите действие:" << endl;
	cin >> a;
	cout << "Введите число №1:" << endl;
	cin >> b;
	cout << "Введите число №2" << endl;
	cin >> c;

	int res;
	if (a == "/" and b == 0) {
		cout << "Делить на 0 нельзя!" << endl;
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

	cout << "Результат:" << b << a << c << "=" << res;
	return 0;
}

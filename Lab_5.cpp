#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	string a;
	int b, c;
	cout << "¬ведите действие:" << endl;
	cin >> a;
	cout << "¬ведите число є1:" << endl;
	cin >> b;
	cout << "¬ведите число є2" << endl;
	cin >> c;

	int res;
	if (a == "/" and b == 0) {
		cout << "ƒелить на 0 нельз€!" << endl;
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

	cout << "–езультат:" << b << a << c << "=" << res;
	return 0;
}
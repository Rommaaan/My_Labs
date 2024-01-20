#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	
	int a;
	cout << "Введите число:";
	cin >> a;
	cout << "Решите пример:" << a << "*1" << endl;
	cout << "Ответ:";
	
	int b;
	cin >> b;
	if (b == a * 1) {
		cout << "Верно!";
	}

	else if (b != a * 1) {
		cout << "Неверно.";
	}

	cout << "Решите пример:" << b << "*2" << endl;
	cout << "Ответ:";
	int c;
	cin >> c;

	if (c == b * 2) {
		cout << "Верно!";
	}

	else if (c != b * 2) {
		cout << "Неверно.";
	}
	return 0;
}

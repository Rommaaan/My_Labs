#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (num >= 0 && num <= 10) {
		cout << "Число в диапазоне 0-10\n";
	}
	else if (num >= 11 && num <= 20) {
		cout << "Число в диапазоне 11-20\n";
	}
	else if (num >= 21 && num <= 30) {
		cout << "Число в диапазоне 21-30\n";
	}
	else if (num >= 31 && num <= 40) {
		cout << "Число в диапазоне 31-40\n";
	}
	else if (num >= 41 && num <= 50) {
		cout << "Число в диапазоне 41-50\n";
	}
	else if (num >= 51 && num <= 60) {
		cout << "Число в диапазоне 51-60\n";
	}
	else if (num >= 61 && num <= 70) {
		cout << "Число в диапазоне 61-70\n";
	}
	else if (num >= 71 && num <= 80) {
		cout << "Число в диапазоне 41-50\n";
	}
	else if (num >= 81 && num <= 90) {
		cout << "Число в диапазоне 81-90\n";
	}
	else if (num >= 91 && num <= 100) {
		cout << "Число в диапазоне 91-100\n";
	}
	else {
		cout << "число вне диапазона 1-100\n";
	}

	return 0;
}

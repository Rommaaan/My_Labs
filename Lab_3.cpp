#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int num;
	cout << "������� �����: ";
	cin >> num;
	if (num >= 0 && num <= 10) {
		cout << "����� � ��������� 0-10\n";
	}
	else if (num >= 11 && num <= 20) {
		cout << "����� � ��������� 11-20\n";
	}
	else if (num >= 21 && num <= 30) {
		cout << "����� � ��������� 21-30\n";
	}
	else if (num >= 31 && num <= 40) {
		cout << "����� � ��������� 31-40\n";
	}
	else if (num >= 41 && num <= 50) {
		cout << "����� � ��������� 41-50\n";
	}
	else if (num >= 51 && num <= 60) {
		cout << "����� � ��������� 51-60\n";
	}
	else if (num >= 61 && num <= 70) {
		cout << "����� � ��������� 61-70\n";
	}
	else if (num >= 71 && num <= 80) {
		cout << "����� � ��������� 41-50\n";
	}
	else if (num >= 81 && num <= 90) {
		cout << "����� � ��������� 81-90\n";
	}
	else if (num >= 91 && num <= 100) {
		cout << "����� � ��������� 91-100\n";
	}
	else {
		cout << "����� ��� ��������� 1-100\n";
	}

	return 0;
}
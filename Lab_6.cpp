#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int a;

		cout << "[+] Месяца года [+]" << endl << endl;

		cout << "[1] Январь" << endl;
		cout << "[2] Февраль" << endl;
		cout << "[3] Март" << endl;
		cout << "[4] Апрель" << endl;
		cout << "[5] Май" << endl;
		cout << "[6] Июнь" << endl;
		cout << "[7] Июль" << endl;
		cout << "[8] Август" << endl;
		cout << "[9] Сентябрь" << endl;
		cout << "[10] Октябрь" << endl;
		cout << "[12] Ноябрь" << endl;
		cout << "[12] Декабрь" << endl << endl;

		cout << "[0] Выход" << endl << endl << endl;
		do{
			cout << "Выберите номер месяца: ";  cin >> a;

		switch (a) {
		case 1:
			cout << "Выбран Январь!" << endl << endl << endl;
			break;
		case 2:
			cout << "Выбран Февраль!" << endl << endl << endl;
			break;
		case 3:
			cout << "Выбран Март!" << endl << endl << endl;
			break;
		case 4:
			cout << "Выбран Апрель!" << endl << endl << endl;
			break;
		case 5:
			cout << "Выбран Май!" << endl << endl << endl;
			break;
		case 6:
			cout << "Выбран Июнь!" << endl << endl << endl;
			break;
		case 7:
			cout << "Выбран Июль!" << endl << endl << endl;
			break;
		case 8:
			cout << "Выбран Сентябрь!" << endl << endl << endl;
			break;
		case 9:
			cout << "Выбран Сентябрь!" << endl << endl << endl;
			break;
		case 10:
			cout << "Выбран Октябрь!" << endl << endl << endl;
			break;
		case 11:
			cout << "Выбран Ноябрь!" << endl << endl << endl;
			break;
		case 12:
			cout << "Выбран Декабрь!" << endl << endl << endl;
			break;
		default:
			cout << "Такого месяца нет!" << endl << endl << endl;
			break;
		}
	} while (a != 0);
	return 0;
}

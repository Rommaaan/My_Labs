#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int cyrcle, i;

	cout << "----------" << endl;
	cout << " Цикл For" << endl;
	cout << "----------" << endl << endl;

	cout << "Введите количество кругов: "; cin >> cyrcle;
	cout << endl;

	for (int i = 0; cyrcle != i; i++) {
		if (i <= cyrcle) {
			cout << "Это " << i + 1 << " круг" << endl;
		}
		else {
			break;
		}
	}
}

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int cyrcle, i;

	cout << "----------" << endl;
	cout << " ���� For" << endl;
	cout << "----------" << endl << endl;

	cout << "������� ���������� ������: "; cin >> cyrcle;
	cout << endl;

	for (int i = 0; cyrcle != i; i++) {
		if (i <= cyrcle) {
			cout << "��� " << i + 1 << " ����" << endl;
		}
		else {
			break;
		}
	}
}
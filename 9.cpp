#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int cyrcle, i = 0;

	cout << "[+] ���� While [+]" << endl << endl;

	cout << "[] ������� ���������� ������: "; cin >> cyrcle;
	cout << endl;

	while (cyrcle != i)
	{
		cout << "��� " << i + 1 << " ����." << endl << endl;
		i++;
	}
	return 0;
}
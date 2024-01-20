#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int cyrcle, i = 0;
	
	cout << "[+] Цикл While [+]" << endl << endl;

	cout << "[] Введите количество кругов: "; cin >> cyrcle;
	cout << endl;

	while (cyrcle != i)
	{
		cout << "Это " << i + 1 << " круг." << endl << endl;
		i++;
	}
	return 0;
}

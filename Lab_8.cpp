#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int l;
	int w;

	do {
		cout << "[+] ���������� [+]" << endl << endl;

		cout << "[1] ������� �����" << endl;
		cout << "[2] ���������� �����" << endl << endl;

		cout << "[3] ����� " << endl << endl;

		cout << "[] �������� ����: "; cin >> l;
		if (l != 3)
		{
			switch (l)
			{
			case 1:
				system("cls");
				do {
					cout << "[1] �������� " << endl;
					cout << "[2] ������� " << endl;
					cout << "[3] ������� " << endl;
					cout << "[4] ��������� " << endl;
					cout << "[5] ������� " << endl;
					cout << "[6] ������� " << endl;
					cout << "[7] ���� " << endl;
					cout << "[8] ������ " << endl;
					cout << "[9] ���� " << endl;
					cout << "[10] ������� " << endl;
					cout << "[11] ������ " << endl;
					cout << "[12] ������� ��� " << endl;
					cout << "[13] ���������� ��� " << endl;
					cout << "[14] ������ " << endl;
					cout << "[15] ������� " << endl << endl;

					cout << "[0] ����� " << endl << endl;

					cout << "[] ������� ����� �����: "; cin >> w;
					system("cls");
					switch (w)
					{
					case 1:
						cout << "[] �������� - Flat [] " << endl << endl;
						break;
					case 2:
						cout << "[] ������� - Man [] " << endl << endl;
						break;
					case 3:
						cout << "[] ������� - Woman [] " << endl << endl;
						break;
					case 4:
						cout << "[] ��������� - Calendar [] " << endl << endl;
						break;
					case 5:
						cout << "[] ������� - Boy [] " << endl << endl;
						break;
					case 6:
						cout << "[] ������� - Girl [] " << endl << endl;
						break;
					case 7:
						cout << "[] ���� - Brother [] " << endl << endl;
						break;
					case 8:
						cout << "[] ������ - Sister [] " << endl << endl;
						break;
					case 9:
						cout << "[] ���� - Table [] " << endl << endl;
						break;
					case 10:
						cout << "[] ������� - Phone [] " << endl << endl;
						break;
					case 11:
						cout << "[] ������ - Road [] " << endl << endl;
						break;
					case 12:
						cout << "[] ������� ��� - Kindergarten[] " << endl << endl;
						break;
					case 13:
						cout << "[] ���������� ��� - Gym [] " << endl << endl;
						break;
					case 14:
						cout << "[] ������ - Old [] " << endl << endl;
						break;
					case 15:
						cout << "[] ������� - Young [] " << endl << endl;
						break;
					default:
						system("cls");
						cout << "[] �� ����� �� ���������� ������" << endl << endl;
						break;
					}
				} while (w != 0);
				break;
			case 2:
				system("cls");
				do {
					cout << "[1] Flat " << endl;
					cout << "[2] Man " << endl;
					cout << "[3] Woman " << endl;
					cout << "[4] Calendar " << endl;
					cout << "[5] Boy " << endl;
					cout << "[6] Girl " << endl;
					cout << "[7] Brother " << endl;
					cout << "[8] Sister " << endl;
					cout << "[9] Table " << endl;
					cout << "[10] Phone " << endl;
					cout << "[11] Road " << endl;
					cout << "[12] Kindergarten " << endl;
					cout << "[13] Gym " << endl;
					cout << "[14] Old " << endl;
					cout << "[15] Young " << endl << endl;

					cout << "[0] ����� " << endl << endl;

					cout << "[] ������� ����� �����: "; cin >> w;
					system("cls");
					switch (w)
					{
					case 1:
						cout << "[] Flat - �������� [] " << endl << endl;
						break;
					case 2:
						cout << "[] Man - ������� [] " << endl << endl;
						break;
					case 3:
						cout << "[] Woman - ������� [] " << endl << endl;
						break;
					case 4:
						cout << "[] Calendar - ��������� [] " << endl << endl;
						break;
					case 5:
						cout << "[] Boy - ������� [] " << endl << endl;
						break;
					case 6:
						cout << "[] Girl - ������� [] " << endl << endl;
						break;
					case 7:
						cout << "[] Brother - ���� [] " << endl << endl;
						break;
					case 8:
						cout << "[] Sister - ������ [] " << endl << endl;
						break;
					case 9:
						cout << "[] Table - ���� [] " << endl << endl;
						break;
					case 10:
						cout << "[] Phone - ������� [] " << endl << endl;
						break;
					case 11:
						cout << "[] Road - ������ [] " << endl << endl;
						break;
					case 12:
						cout << "[] Kindergarten - ������� ��� [] " << endl << endl;
						break;
					case 13:
						cout << "[] Gym - ���������� ��� [] " << endl << endl;
						break;
					case 14:
						cout << "[] Old - ������ [] " << endl << endl;
						break;
					case 15:
						cout << "[] Young - ������� [] " << endl << endl;
						break;
					default:
						system("cls");
						cout << "[] �� ����� �� ���������� ������" << endl << endl;
						break;
					}
				} while (w != 0);
				break;

			} break;
		}
		else cout << "�� ����� �� ������ ������" << endl << endl;
	} while (l != 3);
	return 0;
}
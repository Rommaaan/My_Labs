#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int l;
	int w;

	do {
		cout << "[+] Переводчик [+]" << endl << endl;

		cout << "[1] Русские слова" << endl;
		cout << "[2] Английские слова" << endl << endl;

		cout << "[3] Выйти " << endl << endl;

		cout << "[] Выберите язык: "; cin >> l;
		if (l != 3)
		{
			switch (l)
			{
			case 1:
				system("cls");
				do {
					cout << "[1] Квартира " << endl;
					cout << "[2] Мужчина " << endl;
					cout << "[3] Женщина " << endl;
					cout << "[4] Календарь " << endl;
					cout << "[5] Мальчик " << endl;
					cout << "[6] Девочка " << endl;
					cout << "[7] Брат " << endl;
					cout << "[8] Сестра " << endl;
					cout << "[9] Стол " << endl;
					cout << "[10] Телефон " << endl;
					cout << "[11] Дорога " << endl;
					cout << "[12] Детский сад " << endl;
					cout << "[13] Спортивный зал " << endl;
					cout << "[14] Старый " << endl;
					cout << "[15] Молодой " << endl << endl;

					cout << "[0] Выход " << endl << endl;

					cout << "[] Введите номер слова: "; cin >> w;
					system("cls");
					switch (w)
					{
					case 1:
						cout << "[] Квартира - Flat [] " << endl << endl;
						break;
					case 2:
						cout << "[] Мужчина - Man [] " << endl << endl;
						break;
					case 3:
						cout << "[] Женщина - Woman [] " << endl << endl;
						break;
					case 4:
						cout << "[] Календарь - Calendar [] " << endl << endl;
						break;
					case 5:
						cout << "[] Мальчик - Boy [] " << endl << endl;
						break;
					case 6:
						cout << "[] Девочка - Girl [] " << endl << endl;
						break;
					case 7:
						cout << "[] Брат - Brother [] " << endl << endl;
						break;
					case 8:
						cout << "[] Сестра - Sister [] " << endl << endl;
						break;
					case 9:
						cout << "[] Стол - Table [] " << endl << endl;
						break;
					case 10:
						cout << "[] Телефон - Phone [] " << endl << endl;
						break;
					case 11:
						cout << "[] Дорога - Road [] " << endl << endl;
						break;
					case 12:
						cout << "[] Детский сад - Kindergarten[] " << endl << endl;
						break;
					case 13:
						cout << "[] Спортивный зал - Gym [] " << endl << endl;
						break;
					case 14:
						cout << "[] Старый - Old [] " << endl << endl;
						break;
					case 15:
						cout << "[] Молодой - Young [] " << endl << endl;
						break;
					default:
						system("cls");
						cout << "[] Вы ввели не правильный символ" << endl << endl;
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

					cout << "[0] Выход " << endl << endl;

					cout << "[] Введите номер слова: "; cin >> w;
					system("cls");
					switch (w)
					{
					case 1:
						cout << "[] Flat - Квартира [] " << endl << endl;
						break;
					case 2:
						cout << "[] Man - Мужчина [] " << endl << endl;
						break;
					case 3:
						cout << "[] Woman - Женщина [] " << endl << endl;
						break;
					case 4:
						cout << "[] Calendar - Календарь [] " << endl << endl;
						break;
					case 5:
						cout << "[] Boy - Мальчик [] " << endl << endl;
						break;
					case 6:
						cout << "[] Girl - Девочка [] " << endl << endl;
						break;
					case 7:
						cout << "[] Brother - Брат [] " << endl << endl;
						break;
					case 8:
						cout << "[] Sister - Сестра [] " << endl << endl;
						break;
					case 9:
						cout << "[] Table - Стол [] " << endl << endl;
						break;
					case 10:
						cout << "[] Phone - Телефон [] " << endl << endl;
						break;
					case 11:
						cout << "[] Road - Дорога [] " << endl << endl;
						break;
					case 12:
						cout << "[] Kindergarten - Детский сад [] " << endl << endl;
						break;
					case 13:
						cout << "[] Gym - Спортивный зал [] " << endl << endl;
						break;
					case 14:
						cout << "[] Old - Старый [] " << endl << endl;
						break;
					case 15:
						cout << "[] Young - Молодой [] " << endl << endl;
						break;
					default:
						system("cls");
						cout << "[] Вы ввели не правильный символ" << endl << endl;
						break;
					}
				} while (w != 0);
				break;

			} break;
		}
		else cout << "Вы ввели не верный символ" << endl << endl;
	} while (l != 3);
	return 0;
}
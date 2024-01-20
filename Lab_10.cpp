#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    setlocale(0, "");

    int sn1 = rand() % 10 + 1;
    int sn2 = rand() % 10 + 1;
    int sn3 = rand() % 10 + 1;

    int attempts = 5;
    int guessedNumbers = 0;
    int inputNumber;

    cout << " [] ���� '��������' []\n\n";
    cout << " [1] ������ ���� \n";
    cout << " [2] ����� \n\n";
    cout << " �������� ��������: "; cin >> inputNumber;

    if (inputNumber != 1) {
        cout << " �� ����� ������������ �����";
    }
    else

        while (attempts > 0 && guessedNumbers < 3) {
            cout << " ���� ��������!\n";
            cout << " �������: [" << attempts << " / 5]\n";
            cout << " ������� ����� �� 1 �� 10: "; cin >> inputNumber;

            if (inputNumber == sn1 and inputNumber == sn2 and inputNumber == sn3) {
                cout << " �� ������� �����!\n";
                guessedNumbers++;
            }
            else {
                cout << " �� �� ������� ����� :(\n";
                cout << "\n";
                attempts--;
            }

        }

    cout << "\n ���� ��������!\n";
    cout << " �� ������� " << guessedNumbers << " �� 3 �����.\n";

    return 0;
}
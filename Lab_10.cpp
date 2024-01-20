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

    cout << " [] Игра 'Угадайка' []\n\n";
    cout << " [1] Начать игру \n";
    cout << " [2] Выход \n\n";
    cout << " Выбирите действие: "; cin >> inputNumber;

    if (inputNumber != 1) {
        cout << " Вы ввели неправильное число";
    }
    else

        while (attempts > 0 && guessedNumbers < 3) {
            cout << " Игра началась!\n";
            cout << " Попытки: [" << attempts << " / 5]\n";
            cout << " Введите число от 1 до 10: "; cin >> inputNumber;

            if (inputNumber == sn1 and inputNumber == sn2 and inputNumber == sn3) {
                cout << " Вы угадали число!\n";
                guessedNumbers++;
            }
            else {
                cout << " Вы не угадали число :(\n";
                cout << "\n";
                attempts--;
            }

        }

    cout << "\n Игра окончена!\n";
    cout << " Вы угадали " << guessedNumbers << " из 3 чисел.\n";

    return 0;
}

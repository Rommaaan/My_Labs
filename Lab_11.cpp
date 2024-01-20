#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    cout << " [] Геометрические фигуры []\n\n";

    int c;
    int a;
    int d;
    char t;
    int i = 0;

    cout << " [1] Линия \n";
    cout << " [2] Выход \n";
    cout << " Выбирите номер: "; cin >> c;
    cout << "\n\n";

    switch (c) {
    case 1:
        cout << " Вы выбрали: линия\n\n";
        cout << " [1] Горизонтальная\n";
        cout << " [2] Вертикальная\n\n";
        cout << " Введите число: "; cin >> a;
        cout << "\n\n";
       
        switch (a) {
        case 1:
            cout << " Вы выбрали: горизонтально \n\n";
            cout << " Выбирите длинну линии: "; cin >> d;
            cout << " Выбрать текстуру: "; cin >> t;
            while (i < d) {
                cout << t;
                i++;
            }
            break;

        case 2:
            cout << " Вы выбрали: вертикально \n\n";
            cout << " Выбирите длинну линии: "; cin >> d;
            cout << " Выбрать текстуру: "; cin >> t;
            while (i < d) {
                cout << t << endl;
                i++;
            }
            break;
        }
        break;
    }
    return 0;
}

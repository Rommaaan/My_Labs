#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int size;
    char texture;
    short type;

    cout << "--------\n";
    cout << " Фигуры\n";
    cout << "--------\n\n";
    cout << "-Размер(1-30): "; cin >> size;
    cout << endl;
    if (size >= 1 && size <= 30) {
        cout << "-Текстура: "; cin >> texture;
        cout << endl;

        cout << "| 0 - горизонтальная | 1 - вертикальная |\n";
        cout << "-Тип линии: "; cin >> type;
        cout << endl;

        cout << "Вот что получилось:\n";

        for (int i = 0; i < size; i++) {
            if (type == 0) {
                cout << texture;
            }
            else if (type == 1) {
                cout << texture << endl;
            }
            else {
                cout << "Ошибка";
                break;
            }
        }
    }
    else {
        cout << "Ошибка";
    }
    
    
    int _;
    cin >> _;
}

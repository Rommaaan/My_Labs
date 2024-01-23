#include <iostream>
using namespace std;

void drawFilledSquare(int size, char texture) {}
void drawHollowSquare(int size, char texture) {}

int main() {
    setlocale(0, "");

    int size;
    int choice;
    short type;
    char texture;

    cout << "-----------------------\n";
    cout << " Геометрические фигуры\n";
    cout << "-----------------------\n\n";

    cout << "[1] Линия\n";
    cout << "[2] Квадрат\n\n";
    cout << " Выбирите фигуру: "; cin >> choice;

    if (choice == 1) {
        cout << " Размер: "; cin >> size;

        cout << " Текстура: "; cin >> texture;

        cout << "\n 0 - горизонтальная\n 1 - вертикальная\n";
        cout << " Тип линии: "; cin >> type;

        cout << "\nВывод:\n";
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

    else if (choice == 2) {
        cout << " Размер (x*x): "; cin >> size;

        cout << " Текстура: "; cin >> texture;

        cout << "\n 0 - заполненный\n 1 - пустой\n";
        cout << " Тип квадрата: "; cin >> type;

        cout << "\nВывод:\n";
            if (type == 0) {
                drawFilledSquare(size, texture); {
                    for (int i = 0; i < size; ++i) {
                        for (int j = 0; j < size; ++j) {
                            cout << texture << " ";
                        }
                        cout << endl;
                    }
                }

            }

            else if (type ==1) {
                drawHollowSquare(size, texture); {
                    for (int i = 0; i < size; ++i) {
                        for (int j = 0; j < size; ++j) {
                            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                                cout << texture << " ";
                            }
                            else {
                                cout << "  ";
                            }
                        }
                        cout << endl;
                    }
                }
            }

            else {
                cout << "Ошибка";
                return 0;
            }
    }

    else {
        cout << "Ошибка";
        return 0;
    }

    int _;
    cin >> _;
}
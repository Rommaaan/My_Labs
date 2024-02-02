#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int size;
    int choice;
    short type;
    char texture;
    int rectangle_width;
    int rectangle_height;

    cout << "-----------------------\n";
    cout << " Геометрические фигуры\n";
    cout << "-----------------------\n\n";

    cout << "[1] Линия\n";
    cout << "[2] Квадрат\n";
    cout << "[3] Прямоугольник\n\n";
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
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    cout << texture << " ";
                }
                cout << endl;
            }
        }

        else if (type == 1) {
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
        else {
            cout << "Ошибка";
            return 0;
        }
    }
    else if (choice == 3) {
        cout << " Высота: "; cin >> rectangle_width;
        cout << " Ширина: "; cin >> rectangle_height;

        cout << " Текстура: "; cin >> texture;

        cout << "\n 0 - заполненный\n 1 - пустой\n";
        cout << " Тип прямоугольника: "; cin >> type;
        if (type == 0) {
            for (int i = 0; i < rectangle_width; ++i) {
                for (int j = 0; j < rectangle_height; ++j) {
                    cout << texture << " ";
                }
                cout << endl;
            }
        }

        else if (type == 1) {
            for (int i = 0; i < rectangle_width; ++i) {
                for (int j = 0; j < rectangle_height; ++j) {
                    if (i == 0 || i == rectangle_width - 1 || j == 0 || j == rectangle_height - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
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

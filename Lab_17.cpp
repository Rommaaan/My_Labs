#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int size;
    int space;
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
    cout << "[3] Прямоугольник\n";
    cout << "[4] Треугольник\n";
    cout << "[5] Решетка\n";
    cout << "[6] Крестик\n\n";
    cout << " Выбирите фигуру: "; cin >> choice;
    cout << endl;

    //Линия
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
                cout << " Ошибка";
                break;
            }
        }
    }

    //Квадрат
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

    //Прямоугольник
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
            cout << " Ошибка";
            return 0;
        }
    }

    //Треугольнк
    else if (choice == 4) {

        cout << " Высота: "; cin >> size;

        cout << " Текстура: "; cin >> texture;

        cout << "\n 0 - заполненный\n 1 - пустой\n";
        cout << " Тип треугольника: "; cin >> type;


        if (type == 0) {
            for (int i = 1, k = 0; i <= size; ++i, k = 0) {
                for (space = 1; space <= size - i; ++space) {
                    cout << " ";
                }
                while (k != 2 * i - 1) {
                    cout << texture; ++k;
                }
                cout << endl;
            }
        }

        else if (type == 1) {
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size - i; j++) {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++) {
                    if (j == 1 || j == 2 * i - 1 || i == size) {
                        cout << texture;
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
        else {
            cout << " Ошибка";
            return 0;
        }

    }

    //Решотка
    else if (choice == 5) {
        cout << " Размер: "; cin >> size;

        cout << " Текстура: "; cin >> texture;
        cout << endl;

        for (unsigned short y = 0; y < size; y++)
        {
            for (unsigned short x = 0; x < size; x++)
            {
                if (x % 2 == 1 || y % 2 == 1)
                {
                    cout << texture << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    //Крестик
    else if (choice == 6) {
        cout << " Размер: "; cin >> size;

        cout << " Текстура: "; cin >> texture;
        cout << endl;

        for (unsigned short y = 0; y < size; y++)
        {
            for (unsigned short x = 0; x < size; x++)
            {
                if (x == y || x == size - y - 1)
                {
                    cout << texture;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    else {
        cout << " Ошибка";
        return 0;
    }

    int _;
    cin >> _;
}

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
    cout << " �������������� ������\n";
    cout << "-----------------------\n\n";

    cout << "[1] �����\n";
    cout << "[2] �������\n";
    cout << "[3] �������������\n\n";
    cout << " �������� ������: "; cin >> choice;

    if (choice == 1) {
        cout << " ������: "; cin >> size;

        cout << " ��������: "; cin >> texture;

        cout << "\n 0 - ��������������\n 1 - ������������\n";
        cout << " ��� �����: "; cin >> type;

        cout << "\n�����:\n";
        for (int i = 0; i < size; i++) {
            if (type == 0) {
                cout << texture;
            }
            else if (type == 1) {
                cout << texture << endl;
            }
            else {
                cout << "������";
                break;
            }
        }
    }

    else if (choice == 2) {
        cout << " ������ (x*x): "; cin >> size;

        cout << " ��������: "; cin >> texture;

        cout << "\n 0 - �����������\n 1 - ������\n";
        cout << " ��� ��������: "; cin >> type;

        cout << "\n�����:\n";
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
            cout << "������";
            return 0;
        }
    }
    else if (choice == 3) {
        cout << " ������: "; cin >> rectangle_width;
        cout << " ������: "; cin >> rectangle_height;

        cout << " ��������: "; cin >> texture;

        cout << "\n 0 - �����������\n 1 - ������\n";
        cout << " ��� ��������������: "; cin >> type;
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
            cout << "������";
            return 0;
        }

    }
    else {
        cout << "������";
        return 0;
    }

    int _;
    cin >> _;
}

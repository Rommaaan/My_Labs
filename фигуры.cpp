#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int size;
    char texture;
    short type;

    cout << "--------\n";
    cout << " ������\n";
    cout << "--------\n\n";
    cout << "-������(1-30): "; cin >> size;
    cout << endl;
    if (size >= 1 && size <= 30) {
        cout << "-��������: "; cin >> texture;
        cout << endl;

        cout << "| 0 - �������������� | 1 - ������������ |\n";
        cout << "-��� �����: "; cin >> type;
        cout << endl;

        cout << "��� ��� ����������:\n";

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
    else {
        cout << "������";
    }


    int _;
    cin >> _;
}
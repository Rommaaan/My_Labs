#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    cout << " [] �������������� ������ []\n\n";

    int c;
    int a;
    int d;
    char t;
    int i = 0;

    cout << " [1] ����� \n";
    cout << " [2] ����� \n";
    cout << " �������� �����: "; cin >> c;
    cout << "\n\n";

    switch (c) {
    case 1:
        cout << " �� �������: �����\n\n";
        cout << " [1] ��������������\n";
        cout << " [2] ������������\n\n";
        cout << " ������� �����: "; cin >> a;
        cout << "\n\n";

        switch (a) {
        case 1:
            cout << " �� �������: ������������� \n\n";
            cout << " �������� ������ �����: "; cin >> d;
            cout << " ������� ��������: "; cin >> t;
            while (i < d) {
                cout << t;
                i++;
            }
            break;

        case 2:
            cout << " �� �������: ����������� \n\n";
            cout << " �������� ������ �����: "; cin >> d;
            cout << " ������� ��������: "; cin >> t;
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







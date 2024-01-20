#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int num;
    int answer;
    int color;
    int question;
    int settings;
    int attempts = 3;
    int guessedNumbers = 0;

    setlocale(0, "");
    cout << " -----------\n";
    cout << "  ���������\n";
    cout << " -----------\n\n";
    cout << " �����������. �������� ��� ��� �����: "; cin >> name;
    system("cls");

    while (true) {
        system("cls");
        cout << " -----------\n";
        cout << "  ���������\n";
        cout << " -----------\n\n";
        cout << " ��� ����� - " << name;
        cout << "\n\n";
        cout << " [1] ������ ����\n";
        cout << " [2] ���������\n";
        cout << " [3] �������\n";
        cout << " [0] �����\n\n";

        cout << " ������� ��������: "; cin >> num;
        cout << "\n";
        system("cls");

        //������ ����
        if (num == 1) {
            cout << " ��������� ����\n\n";
            cout << name << ", �������� ���-�� ��������\n";
            cout << " 1) 8 ��������\n";
            cout << " 2) 10 ��������\n";
            cout << " 3) 12 ��������\n\n";
            cout << " �������� ��������� �������: "; cin >> question;
            system("cls");

            //1.1
            if (question == 1) {
                cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                cout << " 1. ��� ������ 1�? \n\n";
                cout << " 1) ����� ����������� ��������\n";
                cout << " 2) ���� ������� ��������\n";
                cout << " 3) ������ ����������� ���������\n";
                cout << " 4) �������� ����� ���������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");
                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }

                //2.1
                cout << " 2. ��� ������ �++? \n\n";
                cout << " 1) ����� �������\n";
                cout << " 2) ��� �������\n";
                cout << " 3) ����� ����������\n";
                cout << " 4) ������ ��������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }

                //3.1
                cout << " 3. ����� ����� ������ ���� ���������������? \n\n";
                cout << " 1) Fortran\n";
                cout << " 2) C++\n";
                cout << " 3) JavaScript\n";
                cout << " 4) C#\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, ���������� �����";
                    cout << endl;
                    break;
                }

                //4.1
                cout << " 4. ����� ����� ����� ���� ���������������? \n\n";
                cout << " 1) JavaScript\n";
                cout << " 2) Ruby\n";
                cout << " 3) Kotlin\n";
                cout << " 4) Carbon\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������ ";
                    cout << endl;
                    break;
                }

                //5.1
                cout << " 5. ����� ���� �������� ������ �������� ������? \n\n";
                cout << " 1) ���������\n";
                cout << " 2) �������\n";
                cout << " 3) ��������������\n";
                cout << " 4) �++\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //6.1
                cout << " 6. � ����� ���� �������� PYTHON? \n\n";
                cout << " 1) 1999\n";
                cout << " 2) 2006\n";
                cout << " 3) 1995\n";
                cout << " 4) 1991\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //7.1
                cout << " 7. ����� ���������� ���������� ����-����� ���������? \n\n";
                cout << " 1) �� ������ ����������� ����� ���������\n";
                cout << " 2) � �������� ����������� ���������\n";
                cout << " 3) ����� ����������� ���������\n";
                cout << " 4) �� ����� ���������� ����-�����\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //8.1
                cout << " 8. ��� ���������� ����� ���������� ������, ������� ����� ��� ���� ���� ��������� ���? \n\n";
                cout << " 1) ���������\n";
                cout << " 2) ������\n";
                cout << " 3) ������\n";
                cout << " 4) ������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (guessedNumbers == 5) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 6) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 7) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 8) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (attempts == 0) {
                    cout << " �� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;

                }    
            }
            

            else if (question == 2) {

                //1.2
                cout << " ��� ... | �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                cout << " 1. ��� ������ 1�? \n\n";
                cout << " 1) ����� ����������� ��������\n";
                cout << " 2) ���� ������� ��������\n";
                cout << " 3) ������ ����������� ���������\n";
                cout << " 4) �������� ����� ���������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");
                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }

                //2.2
                cout << " 2. ��� ������ �++? \n\n";
                cout << " 1) ����� �������\n";
                cout << " 2) ��� �������\n";
                cout << " 3) ����� ����������\n";
                cout << " 4) ������ ��������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }

                //3.2
                cout << " 3. ����� ����� ������ ���� ���������������? \n\n";
                cout << " 1) Fortran\n";
                cout << " 2) C++\n";
                cout << " 3) JavaScript\n";
                cout << " 4) C#\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, ���������� �����";
                    cout << endl;
                    break;
                }

                //4.2
                cout << " 4. ����� ����� ����� ���� ���������������? \n\n";
                cout << " 1) JavaScript\n";
                cout << " 2) Ruby\n";
                cout << " 3) Kotlin\n";
                cout << " 4) Carbon\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������ ";
                    cout << endl;
                    break;
                }

                //5.2
                cout << " 5. ����� ���� �������� ������ �������� ������? \n\n";
                cout << " 1) ���������\n";
                cout << " 2) �������\n";
                cout << " 3) ��������������\n";
                cout << " 4) �++\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //6.2
                cout << " 6. � ����� ���� �������� PYTHON? \n\n";
                cout << " 1) 1999\n";
                cout << " 2) 2006\n";
                cout << " 3) 1995\n";
                cout << " 4) 1991\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //7.2
                cout << " 7. ����� ���������� ���������� ����-����� ���������? \n\n";
                cout << " 1) �� ������ ����������� ����� ���������\n";
                cout << " 2) � �������� ����������� ���������\n";
                cout << " 3) ����� ����������� ���������\n";
                cout << " 4) �� ����� ���������� ����-�����\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //8.2
                cout << " 8. ��� ���������� ����� ���������� ������, ������� ����� ��� ���� ���� ��������� ���? \n\n";
                cout << " 1) ���������\n";
                cout << " 2) ������\n";
                cout << " 3) ������\n";
                cout << " 4) ������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //9.2
                cout << " 9. ����� ����� ����������� ��� ������ � ������������� ��������? \n\n";
                cout << " 1) �������� �����\n";
                cout << " 2) ������ �����\n";
                cout << " 3) ������ �����\n";
                cout << " 4) ��� ���\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //10.2
                cout << " 10. � ������ ������ ������ ���������� ����� ����� �������� ��������� �������? \n\n";
                cout << " 1) �������� �����\n";
                cout << " 2) ������ �����\n";
                cout << " 3) ������ �����\n";
                cout << " 4) ��� ���\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (guessedNumbers == 7) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 8) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 9) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 10) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }


            }
            else if (question == 3) {

                //1.3
                cout << " ��� ... | �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                cout << " 1. ��� ������ 1�? \n\n";
                cout << " 1) ����� ����������� ��������\n";
                cout << " 2) ���� ������� ��������\n";
                cout << " 3) ������ ����������� ���������\n";
                cout << " 4) �������� ����� ���������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");
                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }

                //2.3
                cout << " 2. ��� ������ �++? \n\n";
                cout << " 1) ����� �������\n";
                cout << " 2) ��� �������\n";
                cout << " 3) ����� ����������\n";
                cout << " 4) ������ ��������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }

                //3.3
                cout << " 3. ����� ����� ������ ���� ���������������? \n\n";
                cout << " 1) Fortran\n";
                cout << " 2) C++\n";
                cout << " 3) JavaScript\n";
                cout << " 4) C#\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer == 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, ���������� �����";
                    cout << endl;
                    break;
                }

                //4.3
                cout << " 4. ����� ����� ����� ���� ���������������? \n\n";
                cout << " 1) JavaScript\n";
                cout << " 2) Ruby\n";
                cout << " 3) Kotlin\n";
                cout << " 4) Carbon\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������ ";
                    cout << endl;
                    break;
                }

                //5.3
                cout << " 5. ����� ���� �������� ������ �������� ������? \n\n";
                cout << " 1) ���������\n";
                cout << " 2) �������\n";
                cout << " 3) ��������������\n";
                cout << " 4) �++\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //6.3
                cout << " 6. � ����� ���� �������� PYTHON? \n\n";
                cout << " 1) 1999\n";
                cout << " 2) 2006\n";
                cout << " 3) 1995\n";
                cout << " 4) 1991\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //7.3
                cout << " 7. ����� ���������� ���������� ����-����� ���������? \n\n";
                cout << " 1) �� ������ ����������� ����� ���������\n";
                cout << " 2) � �������� ����������� ���������\n";
                cout << " 3) ����� ����������� ���������\n";
                cout << " 4) �� ����� ���������� ����-�����\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //8.3
                cout << " 8. ��� ���������� ����� ���������� ������, ������� ����� ��� ���� ���� ��������� ���? \n\n";
                cout << " 1) ���������\n";
                cout << " 2) ������\n";
                cout << " 3) ������\n";
                cout << " 4) ������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //9.3
                cout << " 9. ����� ����� ����������� ��� ������ � ������������� ��������? \n\n";
                cout << " 1) �������� �����\n";
                cout << " 2) ������ �����\n";
                cout << " 3) ������ �����\n";
                cout << " 4) ��� ���\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //10.3
                cout << " 10. � ������ ������ ������ ���������� ����� ����� �������� ��������� �������? \n\n";
                cout << " 1) �������� �����\n";
                cout << " 2) ������ �����\n";
                cout << " 3) ������ �����\n";
                cout << " 4) ��� ���\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //11.3
                cout << " 11. ����� ���� ������� ������ ������? \n\n";
                cout << " 1) 1900\n";
                cout << " 2) 1947\n";
                cout << " 3) 1984\n";
                cout << " 4) 1999\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }

                //12.3
                cout << " 12. ��� ������� ������ ����������� ���? \n\n";
                cout << " 1) ���� �����\n";
                cout << " 2) ����� ����������\n";
                cout << " 3) ���� ���������\n";
                cout << " 4) ��� ������\n\n";
                cout << " ������� �����: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " �� �������!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " ���... �� �� �������\n";
                    cout << "\n";
                    attempts--;
                    cout << " �����:" << attempts << "/3 | ����:" << guessedNumbers << "\n\n";
                }
                if (guessedNumbers == 9) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 10) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 11) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 12) {
                    cout << " �� ��������, ������ " << guessedNumbers << " �����\n �����������!";
                    cout << endl;
                    return 0;
                }
                if (attempts == 0) {
                    cout << "�� ���������, � ��������� ��� ������";
                    cout << endl;
                    break;
                }
            }
        }

        //���������
        else if (num == 2) {
            while (true) {
                system("cls");

                cout << " -----------\n";
                cout << "  ���������\n";
                cout << " -----------\n\n";

                cout << " ��� ����� - " << name;
                cout << endl << endl;

                cout << " [1] �������� ���\n";
                cout << " [2] �������� ���� ����������\n";
                cout << " [0] �����\n\n";
                cout << " �������� ��������� �������: "; cin >> settings;
                if (settings <= 0) {
                    break;
                }
                while (true) {
                    if (settings == 1) {
                        system("cls");
                        cout << " ��� �� ������ �������� ���\n";
                        cout << " ������� ����� ���: "; cin >> name;
                        system("cls");
                        break;
                    }
                    else if (settings == 2) {
                        system("cls");
                        cout << " ��� �� ������ �������� ���� ����������\n";
                        cout << " [1] �����\n [2] ������\n [3] ������� �����\n [4] �������\n [5] ����������\n\n";
                        cout << " �������� ����� �����: "; cin >> color;
                        switch (color) {
                        case 0:
                            system("color F0");
                            break;
                        case 1:
                            system("color 1");
                        case 2:
                            if (color == 2) {
                                system("color 2");
                                break;
                            }
                        case 3:
                            if (color == 3) {
                                system("color 3");
                                break;
                            }
                        case 4:
                            if (color == 4) {
                                system("color 4");
                                break;
                            }
                        case 5:
                            if (color == 5) {
                                system("color 5");
                                break;
                            }
                        default:
                            if (color > 5) {
                                cout << "\n\x1b[91m [!] ���� ����������� � ������!\x1b[0m" << endl;
                                break;
                            }
                        }
                        break;
                    }
                }
                system("cls");
            }
        }

        //�������
        else if (num == 3) {
            while (true) {
                system("cls");
                cout << " ---------\n";
                cout << "  �������\n";
                cout << " ---------\n\n";

                cout << " [1] �� ��������� 1 ���� �� ���������� ����� �� ������\n";
                cout << " [2] �� ��������� ������ �� ���������� � �� ���������� ����� �� ������, �� ��� ����������� ������ �� ������� 1 �����\n";
                cout << " [3] �� ������� ����� ��� ������������ ������ �� ������\n";
                cout << " [0] �����\n";
                cout << " ������� 0 ��� ��������: "; cin >> settings;
                if (settings <= 0) {
                    break;
                }
            }
        }
    }
    return 0;
}
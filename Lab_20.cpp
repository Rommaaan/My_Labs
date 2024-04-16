#include <iostream>
using namespace std;

int main()
{
    int arrInt[10] = {1, 20, 32, 4, 1, 2, 2, 54, 23, 0};
    short arrShort[10] = { 3, 40, 5, 6, 1, 9, 23, 7, 8, 2 };
    long arrLong[10] = { 123456789, 987654321, 111111111, 222222222, 333333333, 444444444, 555555555, 666666666, 777777777, 888888888 };
    float arrFloat[10] = { 3.14, 2.718, 1.618, 0.577, 1.732, 2.236, 5.39, 1.333, 0.577, 2.718 };
    double arrDouble[10] = { 3.14159, 2.71828, 1.41421, 1.73205, 2.23607, 1.61803, 2.71828, 1.33333, 0.70711, 2.44949 };
    char arrChar[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    bool arrBool[10] = { true, false, true, true, true, false, false, true, false, true };
    string  arrString[10] = { "Moscow", "Saint-Petersburg", "Sochi", "Mexico", "Vladivostok", "Makhachkala", "Tokyo", "Novosibirsk", "Magnitogorsk", "Sydney"};
	setlocale(0, "");

    cout << "Массив INT:\n";
    for (int i = 0; i < 10; i++) {
        cout << " -  arrInt" << i << " | значение: " << arrInt[i] << "\n";
    }

    cout << "\n";
    
    cout << "Массив SHORT:\n";
    for (int i = 0; i < 10; i++) {
        cout << " -  arrShort" << i << " | значение: " << arrShort[i] << "\n";
    }

    cout << "\n";
    
    cout << "Массив LONG:\n";
    for (int i = 0; i < 10; i++) {
        cout << " -  arrLong" << i << " | значение: " << arrLong[i] << "\n";
    }

    cout << "\n";
    
    cout << "Массив FLOAT:\n";
    for (int i = 0; i < 10; i++) {
        cout << " -  arrFloat" << i << " | значение: " << arrFloat[i] << "\n";
    }

    cout << "\n";
    
    cout << "Массив DOUBLE:\n";
    for (int i = 0; i < 10; i++) {
        cout << " -  arrDouble" << i << " | значение: " << arrDouble[i] << "\n";
    }

    cout << "\n";
    
    cout << "Массив CHAR:\n";
    for (int i = 0; i < 10; i++) {
        cout << " -  arrChar" << i << " | значение: " << arrChar[i] << "\n";
    }
    
    cout << "\n";

    cout << "Массив BOOL:\n";
    for (int i = 0; i < 10; i++) {
        cout << " -  arrBool" << i << " | значение: " << arrBool[i] << "\n";
    }

    cout << "\n";

    cout << "Массив STRING:\n";
    for (int i = 0; i < 10; i++) {
        cout << " -  arrString" << i << " | значение: " << arrString[i] << "\n";
    }

    cout << "\n";

    return 0;
}

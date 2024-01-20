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
    cout << "  Викторина\n";
    cout << " -----------\n\n";
    cout << " Здравтвуйте. Напишите как вас зовут: "; cin >> name;
    system("cls");

    while (true) {
        system("cls");
        cout << " -----------\n";
        cout << "  Викторина\n";
        cout << " -----------\n\n";
        cout << " Вас зовут - " << name;
        cout << "\n\n";
        cout << " [1] Начать игру\n";
        cout << " [2] Настройки\n";
        cout << " [3] Правила\n";
        cout << " [0] Выход\n\n";

        cout << " Выбирте действие: "; cin >> num;
        cout << "\n";
        system("cls");

        //Начать игру
        if (num == 1) {
            cout << " Настройка игры\n\n";
            cout << name << ", выбирите кол-во вопросов\n";
            cout << " 1) 8 вопросов\n";
            cout << " 2) 10 вопросов\n";
            cout << " 3) 12 вопросов\n\n";
            cout << " Запишите выбранный вариант: "; cin >> question;
            system("cls");

            //1.1
            if (question == 1) {
                cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                cout << " 1. КТО СОЗДАЛ 1С? \n\n";
                cout << " 1) Борис Григорьевич Нуралиев\n";
                cout << " 2) Юрий Борисов Нуралиев\n";
                cout << " 3) Никита Григорьевич Сергеевич\n";
                cout << " 4) Владимир Южный Сергеевич\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");
                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }

                //2.1
                cout << " 2. КТО СОЗДАЛ С++? \n\n";
                cout << " 1) Райан Гослинг\n";
                cout << " 2) Кен Томпсон\n";
                cout << " 3) Бьёрн Страуструп\n";
                cout << " 4) Брайан Керниган\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }

                //3.1
                cout << " 3. КАКОЙ САМЫЙ СТАРЫЙ ЯЗЫК ПРОГРАММИРОВАНЯ? \n\n";
                cout << " 1) Fortran\n";
                cout << " 2) C++\n";
                cout << " 3) JavaScript\n";
                cout << " 4) C#\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, попробуйте снова";
                    cout << endl;
                    break;
                }

                //4.1
                cout << " 4. КАКОЙ САМЫЙ НОВЫЙ ЯЗЫК ПРОГРАММИРОВАНЯ? \n\n";
                cout << " 1) JavaScript\n";
                cout << " 2) Ruby\n";
                cout << " 3) Kotlin\n";
                cout << " 4) Carbon\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт ";
                    cout << endl;
                    break;
                }

                //5.1
                cout << " 5. КАКОЙ ЯЗЫК ЯВЛЯЕТСЯ ЯЗЫКОМ ВЫСОКОГО УРОВНЯ? \n\n";
                cout << " 1) Ассемблер\n";
                cout << " 2) Фортран\n";
                cout << " 3) Макроассемблер\n";
                cout << " 4) С++\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //6.1
                cout << " 6. В КАКОМ ГОДУ ПОЯВИЛСЯ PYTHON? \n\n";
                cout << " 1) 1999\n";
                cout << " 2) 2006\n";
                cout << " 3) 1995\n";
                cout << " 4) 1991\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //7.1
                cout << " 7. КОГДА НЕОБХОДИМО СОСТАВЛЯТЬ БЛОК-СХЕМУ ПРОГРАММЫ? \n\n";
                cout << " 1) До начала составления самой программы\n";
                cout << " 2) В процессе составления программы\n";
                cout << " 3) После составления программы\n";
                cout << " 4) Не нужно составлять блок-схему\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //8.1
                cout << " 8. КАК НАЗЫВАЕТСЯ НАБОР ОДНОТИПНЫХ ДАННЫХ, ИМЕЮЩИЙ ОБЩЕЕ ДЛЯ ВСЕХ ЭТИХ ЭЛЕМЕНТОВ ИМЯ? \n\n";
                cout << " 1) Множество\n";
                cout << " 2) Массив\n";
                cout << " 3) Запись\n";
                cout << " 4) Список\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (guessedNumbers == 5) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 6) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 7) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 8) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (attempts == 0) {
                    cout << " Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;

                }    
            }
            

            else if (question == 2) {

                //1.2
                cout << " Имя ... | жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                cout << " 1. КТО СОЗДАЛ 1С? \n\n";
                cout << " 1) Борис Григорьевич Нуралиев\n";
                cout << " 2) Юрий Борисов Нуралиев\n";
                cout << " 3) Никита Григорьевич Сергеевич\n";
                cout << " 4) Владимир Южный Сергеевич\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");
                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }

                //2.2
                cout << " 2. КТО СОЗДАЛ С++? \n\n";
                cout << " 1) Райан Гослинг\n";
                cout << " 2) Кен Томпсон\n";
                cout << " 3) Бьёрн Страуструп\n";
                cout << " 4) Брайан Керниган\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }

                //3.2
                cout << " 3. КАКОЙ САМЫЙ СТАРЫЙ ЯЗЫК ПРОГРАММИРОВАНЯ? \n\n";
                cout << " 1) Fortran\n";
                cout << " 2) C++\n";
                cout << " 3) JavaScript\n";
                cout << " 4) C#\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, попробуйте снова";
                    cout << endl;
                    break;
                }

                //4.2
                cout << " 4. КАКОЙ САМЫЙ НОВЫЙ ЯЗЫК ПРОГРАММИРОВАНЯ? \n\n";
                cout << " 1) JavaScript\n";
                cout << " 2) Ruby\n";
                cout << " 3) Kotlin\n";
                cout << " 4) Carbon\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт ";
                    cout << endl;
                    break;
                }

                //5.2
                cout << " 5. КАКОЙ ЯЗЫК ЯВЛЯЕТСЯ ЯЗЫКОМ ВЫСОКОГО УРОВНЯ? \n\n";
                cout << " 1) Ассемблер\n";
                cout << " 2) Фортран\n";
                cout << " 3) Макроассемблер\n";
                cout << " 4) С++\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //6.2
                cout << " 6. В КАКОМ ГОДУ ПОЯВИЛСЯ PYTHON? \n\n";
                cout << " 1) 1999\n";
                cout << " 2) 2006\n";
                cout << " 3) 1995\n";
                cout << " 4) 1991\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //7.2
                cout << " 7. КОГДА НЕОБХОДИМО СОСТАВЛЯТЬ БЛОК-СХЕМУ ПРОГРАММЫ? \n\n";
                cout << " 1) До начала составления самой программы\n";
                cout << " 2) В процессе составления программы\n";
                cout << " 3) После составления программы\n";
                cout << " 4) Не нужно составлять блок-схему\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //8.2
                cout << " 8. КАК НАЗЫВАЕТСЯ НАБОР ОДНОТИПНЫХ ДАННЫХ, ИМЕЮЩИЙ ОБЩЕЕ ДЛЯ ВСЕХ ЭТИХ ЭЛЕМЕНТОВ ИМЯ? \n\n";
                cout << " 1) Множество\n";
                cout << " 2) Массив\n";
                cout << " 3) Запись\n";
                cout << " 4) Список\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //9.2
                cout << " 9. КАКОЙ МЕТОД ПРИМЕНЯЕТСЯ ДЛЯ ПОИСКА В УПОРЯДОЧЕННЫХ МАССИВАХ? \n\n";
                cout << " 1) Бинарный поиск\n";
                cout << " 2) Прямой выбор\n";
                cout << " 3) Прямой обмен\n";
                cout << " 4) Сам ищи\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //10.2
                cout << " 10. В ОСНОВЕ КАКОГО МЕТОДА СОРТИРОВКИ ЛЕЖИТ ОБМЕН СОСЕДНИХ ЭЛЕМЕНТОВ МАССИВА? \n\n";
                cout << " 1) Бинарный поиск\n";
                cout << " 2) Прямой выбор\n";
                cout << " 3) Прямой обмен\n";
                cout << " 4) Сам ищи\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (guessedNumbers == 7) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 8) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 9) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 10) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }


            }
            else if (question == 3) {

                //1.3
                cout << " Имя ... | жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                cout << " 1. КТО СОЗДАЛ 1С? \n\n";
                cout << " 1) Борис Григорьевич Нуралиев\n";
                cout << " 2) Юрий Борисов Нуралиев\n";
                cout << " 3) Никита Григорьевич Сергеевич\n";
                cout << " 4) Владимир Южный Сергеевич\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");
                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }

                //2.3
                cout << " 2. КТО СОЗДАЛ С++? \n\n";
                cout << " 1) Райан Гослинг\n";
                cout << " 2) Кен Томпсон\n";
                cout << " 3) Бьёрн Страуструп\n";
                cout << " 4) Брайан Керниган\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }

                //3.3
                cout << " 3. КАКОЙ САМЫЙ СТАРЫЙ ЯЗЫК ПРОГРАММИРОВАНЯ? \n\n";
                cout << " 1) Fortran\n";
                cout << " 2) C++\n";
                cout << " 3) JavaScript\n";
                cout << " 4) C#\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer == 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, попробуйте снова";
                    cout << endl;
                    break;
                }

                //4.3
                cout << " 4. КАКОЙ САМЫЙ НОВЫЙ ЯЗЫК ПРОГРАММИРОВАНЯ? \n\n";
                cout << " 1) JavaScript\n";
                cout << " 2) Ruby\n";
                cout << " 3) Kotlin\n";
                cout << " 4) Carbon\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт ";
                    cout << endl;
                    break;
                }

                //5.3
                cout << " 5. КАКОЙ ЯЗЫК ЯВЛЯЕТСЯ ЯЗЫКОМ ВЫСОКОГО УРОВНЯ? \n\n";
                cout << " 1) Ассемблер\n";
                cout << " 2) Фортран\n";
                cout << " 3) Макроассемблер\n";
                cout << " 4) С++\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //6.3
                cout << " 6. В КАКОМ ГОДУ ПОЯВИЛСЯ PYTHON? \n\n";
                cout << " 1) 1999\n";
                cout << " 2) 2006\n";
                cout << " 3) 1995\n";
                cout << " 4) 1991\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //7.3
                cout << " 7. КОГДА НЕОБХОДИМО СОСТАВЛЯТЬ БЛОК-СХЕМУ ПРОГРАММЫ? \n\n";
                cout << " 1) До начала составления самой программы\n";
                cout << " 2) В процессе составления программы\n";
                cout << " 3) После составления программы\n";
                cout << " 4) Не нужно составлять блок-схему\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //8.3
                cout << " 8. КАК НАЗЫВАЕТСЯ НАБОР ОДНОТИПНЫХ ДАННЫХ, ИМЕЮЩИЙ ОБЩЕЕ ДЛЯ ВСЕХ ЭТИХ ЭЛЕМЕНТОВ ИМЯ? \n\n";
                cout << " 1) Множество\n";
                cout << " 2) Массив\n";
                cout << " 3) Запись\n";
                cout << " 4) Список\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 2) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 2) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //9.3
                cout << " 9. КАКОЙ МЕТОД ПРИМЕНЯЕТСЯ ДЛЯ ПОИСКА В УПОРЯДОЧЕННЫХ МАССИВАХ? \n\n";
                cout << " 1) Бинарный поиск\n";
                cout << " 2) Прямой выбор\n";
                cout << " 3) Прямой обмен\n";
                cout << " 4) Сам ищи\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 1) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 1) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //10.3
                cout << " 10. В ОСНОВЕ КАКОГО МЕТОДА СОРТИРОВКИ ЛЕЖИТ ОБМЕН СОСЕДНИХ ЭЛЕМЕНТОВ МАССИВА? \n\n";
                cout << " 1) Бинарный поиск\n";
                cout << " 2) Прямой выбор\n";
                cout << " 3) Прямой обмен\n";
                cout << " 4) Сам ищи\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //11.3
                cout << " 11. КОГДА БЫЛА СОЗДАНА ПЕРВАЯ ФЛЕШКА? \n\n";
                cout << " 1) 1900\n";
                cout << " 2) 1947\n";
                cout << " 3) 1984\n";
                cout << " 4) 1999\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 3) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 3) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }

                //12.3
                cout << " 12. КТО НАПИСАЛ ПЕРВЫЙ ПРОГРАММНЫЙ КОД? \n\n";
                cout << " 1) Билл Гейтс\n";
                cout << " 2) Бьёрн Страуструп\n";
                cout << " 3) Марк Цукерберг\n";
                cout << " 4) Ада Лавлей\n\n";
                cout << " Выбрать ответ: "; cin >> answer;
                cout << "\n\n";
                system("cls");

                if (answer == 4) {
                    cout << " Вы угадали!\n";
                    cout << "\n";
                    guessedNumbers++;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                else if (answer != 4) {
                    cout << " Упс... Вы не угадали\n";
                    cout << "\n";
                    attempts--;
                    cout << " Жизни:" << attempts << "/3 | очки:" << guessedNumbers << "\n\n";
                }
                if (guessedNumbers == 9) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 10) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 11) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (guessedNumbers == 12) {
                    cout << " Вы выиграли, набрав " << guessedNumbers << " очков\n Поздравляем!";
                    cout << endl;
                    return 0;
                }
                if (attempts == 0) {
                    cout << "Вы проиграли, в следующий раз повезёт";
                    cout << endl;
                    break;
                }
            }
        }

        //Настройки
        else if (num == 2) {
            while (true) {
                system("cls");

                cout << " -----------\n";
                cout << "  Насиройки\n";
                cout << " -----------\n\n";

                cout << " Вас зовут - " << name;
                cout << endl << endl;

                cout << " [1] Изменить имя\n";
                cout << " [2] Поменять цвет интерфейса\n";
                cout << " [0] Назад\n\n";
                cout << " Запишите выбранный вариант: "; cin >> settings;
                if (settings <= 0) {
                    break;
                }
                while (true) {
                    if (settings == 1) {
                        system("cls");
                        cout << " Тут вы можете поменять имя\n";
                        cout << " Введите новое имя: "; cin >> name;
                        system("cls");
                        break;
                    }
                    else if (settings == 2) {
                        system("cls");
                        cout << " Тут вы можете изменить цвет интерфейса\n";
                        cout << " [1] Синий\n [2] Зелёный\n [3] Морская волна\n [4] Красный\n [5] Фиолетовый\n\n";
                        cout << " Выбирите номер цвета: "; cin >> color;
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
                                cout << "\n\x1b[91m [!] Цвет отсутствует в списке!\x1b[0m" << endl;
                                break;
                            }
                        }
                        break;
                    }
                }
                system("cls");
            }
        }

        //Правила
        else if (num == 3) {
            while (true) {
                system("cls");
                cout << " ---------\n";
                cout << "  Правила\n";
                cout << " ---------\n\n";

                cout << " [1] Вы получаете 1 очко за правильный ответ на вопрос\n";
                cout << " [2] Вы проходите дальше за правильный и не правильный ответ на вопрос, но при еправильном ответе вы теряете 1 жизнь\n";
                cout << " [3] Вы теряете жизнь при неправильном ответе на вопрос\n";
                cout << " [0] Назад\n";
                cout << " Введите 0 для возврата: "; cin >> settings;
                if (settings <= 0) {
                    break;
                }
            }
        }
    }
    return 0;
}

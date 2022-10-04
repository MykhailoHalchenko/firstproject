#include<iostream>
using namespace std;

//Оператор множественного выбора switch.


void main()
{
    setlocale(LC_ALL, "ru");
    int a,b, selection;
    cout << "Введи 2 ебучих числа" << endl;
    cin >> a >> b;

    cout << "Выбирай математическую операцию говнарь" << endl <<
        "1. Сложение" << endl <<
        "2. Вычетание" << endl <<
        "3. Умножение" << endl <<
        "4. Деление" << endl;

    cin >> selection;

    switch (selection)
    {
    case 1:
        cout << "Рузультат сложения " << a + b << endl;
        break;

    default:
        cout << "Ошибка Еблан! Пункт меню отсутствует!" << endl;
        break;
    }
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int name;

    cout << "Назови своё имя: "<< endl;
    cin >> name;

    cout << "Поздровляю тебя " << name << endl;
return 0;
}
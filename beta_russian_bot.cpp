#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int a = rand() % 2 + 1;
    int db = rand() % 2 + 1;
    int b, kd;
    bool cs = true;
    string c;

    if (a == 1) {
        cout << "Дарова. \n1 - Дарова, 2 - Дарова, чё как? \n";
        cin >> b;

        if (b == 1) {
            cout << "Чё как?\n1 - Норм, у тебя чё 2 - Хуёво, у тебя чё?\n";
            cin >> b;

            if (b == 1 && db == 1) {
                cout << "Норм. \n";
                kd = 0;
            }

            if (b == 1 && db == 2) {
                cout << "Хуёво. \n";

                kd = 1;
            }
            
            if (b == 2 && db == 1) {
                cout << "Норм. \n";

                kd = 2;
            }

            if (b == 2 && db == 2) {
                cout << "Хуёво \n";

                kd = 3;
            }
        }
    }   else if (b == 2) {
            if (db == 1) {
                cout << "Норм, у тебя чё?\n1 - Норм. 2 - Хуёво\n";
                cin >> b;

                system("Pause");
                return 0;
            }
    }
}
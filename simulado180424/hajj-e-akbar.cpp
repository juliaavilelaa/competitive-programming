// 12577

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[6];
    int cont = 0;

    while (cin >> name) {
        cont++;
        if (strcmp(name, "*") == 0) {
            break;
        } else {
            if (strcmp(name, "Hajj") == 0) {
                cout << "Case " << cont << ": " << "Hajj-e-Akbar" << endl;
            } else if (strcmp(name, "Umrah") == 0) {
                cout << "Case " << cont << ": " << "Hajj-e-Asghar" << endl;
            }
        }
    }
    return 0;
}
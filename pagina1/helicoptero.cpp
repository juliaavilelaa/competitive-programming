#include <iostream>
using namespace std;

int main() {
    int H, P, F, D;
    cin >> H >> P >> F >> D;

    while (F != H && F != P) {
        F = (F + D + 16) % 16;
    }

    if (F == H) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
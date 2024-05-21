#include <iostream>
using namespace std;

bool colarFotos(int x, int y, int l1, int h1, int l2, int h2) {
    if (l1 + l2 <= x && h1 <= y && h2 <= y) {
        return true;
    } else if (h1 + h2 <= x && l1 <= y && l2 <= y) {
        return true;
    } else if (l1 + h2 <= x && h1 <= y && l2 <= y) {
        return true;
    } else if (h1 + l2 <= x && l1 <= y && h2 <= y) {
        return true;
    } 
    return false;
}

int main() {
    int x, y; 
    int l1, h1, l2, h2;

    cin >> x >> y
        >> l1 >> h1
        >> l2 >> h2;

    if (colarFotos(x, y, l1, h1, l2, h2)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}

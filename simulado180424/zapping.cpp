#include <iostream>
using namespace std;

int main() {
    int a, b, minimum, c1, c2;

    while ((cin >> a >> b) && (a != -1 && b != -1)) {
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        c1 = b - a;
        c2 = 99 - b + a + 1;
        minimum = min(c1, c2);
        
        cout << minimum << endl;
    }
    return 0;
}
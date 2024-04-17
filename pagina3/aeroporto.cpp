#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, v, x, y, t = 0;

    while (cin >> a >> v) {
        t++;
        multiset<int> aero;
        int max = 0;

        if (a == 0 && v == 0) {
            break;
        } 

        for (int i = 0; i < v; i ++) {
            cin >> x >> y;
            aero.insert(x);
            aero.insert(y);
        }

        for (int i = 1; i <= a; i++) {
            if (max < aero.count(i)) {
                max = i;
            }
        }
        
        printf("Teste %d\n", t);

        for (int i = 1; i <= a; i++) {
            if (aero.count(i) == aero.count(max)) {
                cout << i << " ";
            }
        }
        cout << "\n\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int t, n, ages, cap, x = 1;

    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2 == 0) {
            cap = 0;
        } else {
            for (int i = 0; i < n; i++) {
                cin >> ages;
                if (i == int(n/2)) {
                    cap = ages;
                }
            }
        }
        cout << "Case " << x << ": " << cap << endl;
        x++;
    }
    return 0;
}
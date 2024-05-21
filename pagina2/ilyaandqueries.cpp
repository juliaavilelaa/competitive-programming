#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string s;
    int m, l, r, pair;

    cin >> s;

    cin >> m;
    while (m--) {
        pair = 0;
        cin >> l >> r;
        for (int j = l; j < r; j++) {
            if (s[j - 1] == s[j]) {
                pair++;
            }
        }
        cout << pair << endl;
    }

    return 0;
}
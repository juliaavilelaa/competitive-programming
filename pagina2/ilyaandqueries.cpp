#include <iostream>
using namespace std;

int main() {
    int m, l, r, ans;
    string s;

    cin >> s;
    cin >> m;

    for (int i = 1; i <= m; i++) {
        ans = 0;
        cin >> l >> r;
        for (int j = l; j < r; j++) {
            if (s[j] == s[j+1]) {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
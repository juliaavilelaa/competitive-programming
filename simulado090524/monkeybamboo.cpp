#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int minimumk(vector<int> r) {
    int k = 0, dif;
    for (int i = 1; i < r.size(); i++) {
        dif = r[i] - r[i-1];
        if (dif > k) {
            k = dif;
        }
    }
    return k;
}

int main() {
    int t, n, height, c = 1;

    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> rungs;
        while (n--) {
            cin >> height;
            rungs.pb(height);
        }
        cout << "Case " << c << ": " << minimumk(rungs) << endl;
        c++;
    }
    return 0;
}
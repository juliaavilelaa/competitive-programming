#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

// ax + by = d
// d is de gcd of a and b

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a, b, x, y, d, minimal, count;

    while (cin >> a >> b) {
        vector<pair<int, int>> xy;

        d = __gcd(a, b);
        cout << d << endl;
        for (int x = -d; x <= d; x++) {
            for (int y = -d; y <= d; y++) {
                if ((a * x) + (b * y) == d) {
                    xy.push_back(make_pair(x, y));
                    break;
                }
            }
        }
        for (int i = 0; i < xy.size(); i++) {
            minimal = min(abs(xy[i].first) + abs(xy[i].second), minimal);
        }

        count = 0;
        for (int i = 0; i < xy.size(); i++) {
            if (abs(xy[i].first) + abs(xy[i].second) == minimal) {
                count++;
            }
        }
        for (int i = 0; i < xy.size(); i++) {
            if (count > 1) {
                if (xy[i].first <= xy[i].second && abs(xy[i].first) + abs(xy[i].second) == minimal) {
                    cout << xy[i].first << " " << xy[i].second << " " << d << endl;
                    break;
                }
            } else {
                if (abs(xy[i].first) + abs(xy[i].second) == minimal) {
                    cout << xy[i].first << " " << xy[i].second << " " << d << endl;
                    break;
                }
            }
        }
        xy.clear();
    }
    return 0;
}
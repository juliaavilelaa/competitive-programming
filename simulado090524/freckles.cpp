#include <bits/stdc++.h>
using namespace std;

#define pb push_back

float total (vector<int> visited, vector<pair<float, float>> f) {
    int vis = 1;
    visited[0] = 1;
    float x1, x2, y1, y2;
    float dist = 0;
    pair<float, float> cur = f[0];
    pair<float, float> next;
    while (vis != visited.size()) {
        float curdist = FLT_MAX;
        int savei;
        for (int i = 0; i < f.size(); i++) {
            if (visited[i] != 1) {
                x1 = f[i].first;
                y1 = f[i].second;
                x2 = cur.first;
                y2 = cur.second;
                float d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
                if (d < curdist) {
                    curdist = d;
                    next = f[i];
                    savei = i;
                }
            }
        }
        vis++;
        visited[savei] = 1;
        cur = next;
        dist += curdist;
    }
    return dist;
}

int main() {
    int t, n;
    float x, y;

    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<float, float>> f(n);
        for (int i = 0; i < n; i++) {
            cin >> f[i].first >> f[i].second;
        }
        vector<int> visited(n, 0);
        float mindist = total(visited, f);
        cout << fixed << setprecision(2) << mindist << endl << endl;
    }

    return 0; 
}
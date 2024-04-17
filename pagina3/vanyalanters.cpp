#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> lanterns;

int main() {
    int n, len;
    float loc;

    cin >> n >> len;

    for (int i = 0; i < n; i++) {
        cin >> loc;
        lanterns.push_back(loc);
    }
    lanterns.push_back(0);
    lanterns.push_back(len);
    sort(lanterns.begin(), lanterns.end());

    float radius = 1000, minRadius;

    for (int i = 0; i < lanterns.size()-2; i++) {
        for (int j = 1; j < i+2; j++) {
            float current = lanterns[j] - lanterns[i];
            minRadius = min(current, radius);
        }
    }

    cout << minRadius << endl;

    return 0;
}
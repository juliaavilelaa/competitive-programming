#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, px;

    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> px;
            arr.push_back(px);
        }
    }

    

    return 0;
}
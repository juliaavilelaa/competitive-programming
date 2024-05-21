#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, a, m, sum, count;

    cin >> n;
    while (n--) {
        cin >> a;
        vector<int> coins;
        sum = 0;
        count = 0;

        for (int i = 0; i < a; i++) {
            cin >> m;
            coins.push_back(m);
        }
        sort(coins.begin(), coins.end());

        for (auto num : coins) {
            sum += num;
        }

        for (auto num : coins) {
            while (sum % 2 != 0) {
                sum -= num;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;   
}
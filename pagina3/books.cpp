#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n, t, min, total = 0, max = 0;
    vector<int> books;

    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        cin >> min;
        books.push_back(min);
    }

    if (books.back() < books.front()) {
        reverse(books.begin(), books.end());
    } 

    for (int i = 0; i < books.size(); i++) {
        total += books[i];
        if (total <= t) {
            max++;
        }
    }
    
    cout << max << endl;

    return 0;
}
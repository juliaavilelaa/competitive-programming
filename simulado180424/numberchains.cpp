// 263

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    int ascnum, descnum, ans, chain;
    string num;

    vector<int> arr;

    while (cin >> num) {
        chain = 0;

        if (stoi(num) == 0) {
            break;
        }
        cout << "Original number was " << num << endl;

        while (true) {
            chain++;
            sort(num.begin(), num.end());
            ascnum = stoi(num);
            reverse(num.begin(), num.end());
            descnum = stoi(num);
            ans = descnum - ascnum;
            cout << descnum << " - " << ascnum << " = " << ans << endl;
            if (find(arr.begin(), arr.end(), ans) != arr.end()) {
                cout << "Chain length " << chain << "\n\n";
                arr.clear();
                break;
            }
            arr.push_back(ans);
            num = to_string(ans);
        }
    }

    return 0;
}
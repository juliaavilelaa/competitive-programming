#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string input;
    int testcases, index;
    float n;

    for (int i = 0; i < testcases; i++) {
        vector<int> indexArr;
        vector<float> numbers;

        for (int j = 0; j < 3; j++) {
            cin >> index;
            indexArr.push_back(index);
        }
        for (int j = 0; j < indexArr.size(); j++) {
            cin >> n;
            numbers.push_back(n);
        }
        sort(numbers.begin(), numbers.end());
        for (int j = 0; j < indexArr.size(); j++) {
            cout << numbers[indexArr[j]] << endl;
        }
    }

    return 0;
}
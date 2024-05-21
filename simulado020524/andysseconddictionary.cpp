#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;
    string word;

    vector<string> list;

    while (getline(cin, line)) {
        if (EOF) {
            break;
        }
        for (char ch : line) {
            while (ch != '-' && ch != ' ') {
                if (isupper(ch)) {
                    ch = tolower(ch);
                }
                word += ch;
            }
            list.push_back(word);
            word.clear();
        }
    }

    sort(list.begin(), list.end());

    for (auto i : list) {
        cout << i << endl;
    }

    return 0;
}
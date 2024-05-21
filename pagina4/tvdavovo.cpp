#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m, n, x, y, element;

    while (cin >> m >> n && m != 0 && n != 0) {
        vector<vector<int>> rows;
        for (int i = 0; i < m; i++) {
            vector<int> columns;
            for (int j = 0; j < n; j++) {
                cin >> element;
                columns.push_back(element);
            }
            rows.push_back(columns);
        }

        int horizontal = 0, vertical = 0;
        while (cin >> x >> y && (x != 0 && y != 0)) {
            horizontal += x;
            vertical += y;
        }

        if (horizontal > 0) { // move (rows)
            for (int i = 0; i < m; i++) {
                
            }
        } else if (horizontal < 0) { // move backwards (rows)
            for (int i = 0; i < m; i++) {
                
            }
        }
    

        if (vertical > 0) { // move (columns)
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {

                }
            }
        } else if (vertical < 0) { // move backwards (cols)

        }

    return 0;
}
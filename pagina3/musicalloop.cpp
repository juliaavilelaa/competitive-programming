#include <iostream>
#include <vector>
using namespace std;

vector<int> loop;

int main() {
    int n, h, peaks = 0;

    while (cin >> n) {
        if (n == 0) {
            break;
        } 

        cin >> h;
        int anterior = h;

        for (int i = 1; i < n; i++) {
            cin >> h;

            if (h < anterior) {
                peaks++;
                
            }
        }
        
        

        cout << peaks << endl;
    }

    return 0;
}
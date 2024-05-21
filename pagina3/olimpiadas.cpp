#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, o, p, b;

    cin >> n >> m;
    // n = países
    // m = modalidades
    vector<int> ouro(n, 0);
    vector<int> prata(n, 0);
    vector<int> bronze(n, 0);

    for (int i = 0; i < m; i++) {
        cin >> o;
        ouro[o-1]++;
        cin >> p;
        prata[p-1]++;
        cin >> b;
        bronze[b-1]++;
    }

    cout << "ouros" << endl;
    for (int i = 0; i < n; i++) {
        cout << ouro[i] << " ";
    }
    cout << endl;
    cout << "pratas" << endl;
     for (int i = 0; i < n; i++) {
        cout << prata[i] << " ";
    }
    cout << endl;
    cout << "bronzes" << endl;
     for (int i = 0; i < n; i++) {
        cout << bronze[i] << " ";
    }

    return 0;
}
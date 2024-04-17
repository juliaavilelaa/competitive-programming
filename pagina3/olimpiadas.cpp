#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, o, p, b;

    cin >> n >> m;
    // n = países
    // m = modalidades
    vector<int> ouro;
    vector<int> prata;
    vector<int> bronze;

    for (int i = 0; i < m; i++) {
        cin >> o >> p >> b;
        ouro.push_back(o);
        prata.push_back(p);
        bronze.push_back(b);
    }
    
    for (int i = 0; i < m; i++) {
        
    }
}
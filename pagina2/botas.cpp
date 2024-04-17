#include <iostream>
#include <vector>
using namespace std;

vector<int>tam;
vector<char>pe;

int main() {
    int n, m, pares = 0;
    char l;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        tam.push_back(m);
        cin >> l;
        pe.push_back(l);
    }

    vector<pair<int, char>>paresBotas;

    for (int i = 0; i < n; i++) {
        bool encontrado = false;
        for (int j = 0; j < paresBotas.size(); j++) {
            if (tam[i] == paresBotas[j].first && pe[i] != paresBotas[j].second) {
                encontrado = true;
                paresBotas.erase(paresBotas.begin() + j);
                pares++;
                break;
            }
        }
        if (!encontrado) {
            paresBotas.push_back(make_pair(tam[i], pe[i]));
        }
    }

    cout << pares << endl;

    return 0;
}
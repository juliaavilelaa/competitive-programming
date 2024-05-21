#include <iostream>
using namespace std;

unsigned long long int fat(unsigned long long int n) {
    if (n != 1 && n != 0) {
        return n * fat(n-1);
    }
    return 1;
}

int main() {
    unsigned long long int n, d, count, number;

    while (cin >> n >> d && n != 0 && d != 0) {
        count = 0;
        number = fat(n);
        for (unsigned long long int i = 1; i <= number; i++) {
            if (number % i == 0 && i % d == 0) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
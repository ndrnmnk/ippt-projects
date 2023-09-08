#include <iostream>
using namespace std;


int main() {
    long long int k, i, a, b, c, d;
    cin >> k;
    for (i = 0; i < k; i++) {
        cin >> a >> b >> c >> d;
        if (a < b) swap(a, b);
        //if (c < d) swap(c, d);
        while (true) {
            if (b == d) { cout << "YES" << endl; break; }
            else {
                a = a % b;
                swap(a, b);
                if ((a < c) || (b == 0) || (b < d)) { cout << "NO" << endl; break; }
            }
        }
    }
}

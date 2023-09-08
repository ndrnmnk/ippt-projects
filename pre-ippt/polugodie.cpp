#include <iostream>
using namespace std;

int main()
{
    int n, week;
    cin >> n;
    if (n < 241) {
        week = (n + 29) / 30;

    } else {
        week = (n + 29) / 30 + 1;
    }
    cout << week << endl;
    if (n % 30 == 0) cout << 5; else
        cout << ((n % 30) + 4) / 5;
}

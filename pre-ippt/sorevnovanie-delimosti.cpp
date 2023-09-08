#include <iostream>

using namespace std;


int main()
{
    int a, b, k, m, kl, ml = 0;
    cin >> k >> m >> a >> b;
    a--;
    kl = b / k - a / k;
    ml = b / m - a / m;
    cout << kl - ml;
}

#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int a[3], o = 0;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    o = a[2] - a[0];
    o += a[1]-a[0];
    cout << o;
}

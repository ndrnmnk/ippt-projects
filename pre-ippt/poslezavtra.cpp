#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    d+=2;
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((y % 400 == 0) && ((y % 100 != 0) && (y % 4 == 0))) arr[1] = 29;
    if (d > arr[m - 1]) { d-=arr[m-1]; m++; };
    if (m > 12) {m = 1; y++; };
    cout << d << ' ' << m << ' ' << y;
return 0;
}

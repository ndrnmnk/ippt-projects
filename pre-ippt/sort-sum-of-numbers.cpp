#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int sum(int b)
{
    int s = 0;
    b = abs(b);
    while (b != 0)
    {
        s += b % 10;
        b /= 10;
    }
    return s;
}
 
int main()
{
    int n, mas[100];
 
    cin >> n;
    for (size_t i = 0; i < n; i++)
        cin >> mas[i];
 
    sort(mas, mas + n, [](int lh, int rh) {
        int ls = sum(lh);
        int rs = sum(rh);
        if (ls != rs)
            return ls < rs;
        return lh < rh;
        });
 
    for (size_t i = 0; i < n; i++)
        cout << mas[i] << ' ';
    cout << endl;
 
    return 0;
}

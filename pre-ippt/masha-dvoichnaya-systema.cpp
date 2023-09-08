#include <bits/stdc++.h>

using namespace std;

int bin(int a, int b, int c, int d){
    int zeros, ones;
    
    zeros = a - 1;
    ones = 2;
    
    if (c < b) { ones += b - c - 1; zeros -= b - c - 1; }

    if (c == b) { ones--; zeros++; }

    if ((c > b) && (c < a)) { ones += a - c - 1; zeros -= a - c - 1; }

    if (c == a) { ones --; zeros = b; }

    if (d == 1) return ones;
    else return zeros;
}


int main()
{
int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b > a) swap(a, b);
    cout << bin(a, b, c, d);
}

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n; int i;
    cin >> n;
    int h[n], m[n], s[n], t[n];
    for (i=0; i<n; i++) {
        cin >> h[i] >> m[i] >> s[i];
        t[i] = h[i]*3600 + m[i]*60 + s[i];
    }
    sort(t, t+n);

    for (i=0; i<n; i++) {
        cout << t[i] / 3600 << " " << t[i] % 3600 / 60 << " " << t[i] % 60 << "\n";
    }
}

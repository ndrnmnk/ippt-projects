#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
    int n, i, j, ans_l = 0, ans_r = 2;
    cin >> n;
    v.resize(n);
    for (i = 0; i < n; i++) cin >> v[i];
    int ans = v[0] + v[1] + v[2] + v[3];
    for (i = 0; i <= n-4; i++)
        for (j = i+2; j <= n-2; j++) {
            int k = v[i] + v[i+1] + v[j] + v[j+1];
            if (k > ans) { ans = k; ans_l = i; ans_r = j; }
        }
    cout << ans_l+1 << ' ' << ans_l+2 << ' ' << ans_r+1 << ' ' << ans_r+2;
}


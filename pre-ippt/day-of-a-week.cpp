#include <iostream>
using namespace std;

int main(){
    int k; int n; int t;
    cin >> k >> n;
    t = (k+n-1) % 7;
    if (t == 0) cout << 7; else
    cout << t;
}

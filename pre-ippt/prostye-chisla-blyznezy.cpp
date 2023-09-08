#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n){
bool flag = 1;
for (int t = 2; t < n; t++){
    if (n % t == 0) { flag = 0; break; }
}
if (flag == 1) return true; else return false;
}



int main() {
    int a, b, i;
    cin >> a >> b;
    if (b < a) swap(a, b);
    if ((a <= 3) && (b >= 5))
        cout << 3 << " " << 5 << endl;


    for (i = (a+5)/6; (6*i-1 >= a) && (6*i+1 <= b); i++){
        if (prime((6*i)+1) && prime((6*i)-1))
            cout << (6*i)-1 << " " << (6*i)+1 << endl;
    }
}

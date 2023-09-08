#include <iostream>
#include <cmath>
using namespace std;


bool prime(int n){
bool flag = 1;
if (n == 1) flag = 0;
for (int t = 2; t < n; t++){
    if (n % t == 0) { flag = 0; break; }
}
if (flag == 1) return true; else return false;
}

int recheto(int a){
int i, j, res = 0;
bool arr[a];
fill_n(arr, a, 0);
arr[0] = 1;
arr[1] = 1;
int sq = round(sqrt(a));
for (i = 2; i <= sq; i++){
    if (!arr[i]) for (j = i + i; j <= a; j+=i) arr[j]=1;
}
for (i = 2; i < a; i++) if (arr[i]==0) res++;
return res;
}

int main() {
    int a;
    cin >> a;
    cout << recheto(a*2) - recheto(a) - prime(a);
}

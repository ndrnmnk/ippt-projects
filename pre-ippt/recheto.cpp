#include <iostream>
#include <cmath>
using namespace std;

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
for (i = 0; i < a; i++) if (arr[i]==0) res++;
return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << recheto(b) - recheto(a);
}

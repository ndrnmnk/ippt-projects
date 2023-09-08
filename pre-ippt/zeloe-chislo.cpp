#include <iostream>
#include <cmath>
using namespace std;

int sumofdigits(int n){
int sum = 0;
while (n!=0)
    {
        sum += n%10;
        n /= 10;
    }
return sum;
}

int main(){
    double a;
    cin >> a;
    if (a == int(a)) cout << sumofdigits(a); else cout << (sqrt(fabs(a)));
}

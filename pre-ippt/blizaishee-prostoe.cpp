#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n)
{
int i;
bool flag = 0;
if (n < 2) flag=1;
double h = sqrt(n);
if (flag == 0) for (i = 2; i <= h; i++)
{
if (n % i == 0) {
    flag = 1;
    break;
}
}
if (flag == 1) return false; else return true;
}

int main(){
    int n;
    int i;
    cin >> n;
    for (i = 0; 1; i++)
    {
    if (prime(n-i)) {cout << n-i; break;};
    if (prime(n+i)) {cout << n+i; break;};
    }
}

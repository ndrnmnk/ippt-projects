#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[4];
   a[0] = n % 10;
   a[1] = n % 100 / 10;
   a[2] = n % 1000 / 100;
   a[3] = n % 10000 / 1000;
   sort(a, a+4);
   cout << a[3] << a[2] << a[1] << a[0];
}

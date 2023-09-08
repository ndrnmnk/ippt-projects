#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int n, t, i;
   cin >> n;
   int a[4];
   a[0] = n % 10;
   a[1] = n % 100 / 10;
   a[2] = n % 1000 / 100;
   a[3] = n % 10000 / 1000;
   sort(a, a+4);
   if (a[0] == 0) for (i = 1; i<4; i++) if (a[i] != 0) {
       t=a[i];
       a[i]=0;
       a[0]=t;
       break;
    }
   cout << a[0] << a[1] << a[2] << a[3];
}

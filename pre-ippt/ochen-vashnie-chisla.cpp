#include <iostream>
using namespace std;

int main()
{
   int a, b, i = 0;
   cin >> a >> b;
   if (a > b) {
        cout << a-b+1 << " very important numbers: \n";
        for (i = 0; i != a-b+1; i++) cout << a-i << "\n";
   } else {
        cout << b-a+1 << " very important numbers: \n";
        for (i = 0; i != b-a+1; i++) cout << a+i << "\n";
   }
}

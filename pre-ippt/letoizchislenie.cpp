#include <iostream>

using namespace std;

int main()
{
    int a, b, flag = 0;
    cin >> a >> b;
    if ((a < 0) && (b > abs(a)) && (b > 0)) b++;
    if ((b < 0) && (a < abs(b)) && (a > 0)) a--;
    if ((abs(a) == abs(b)) && (  ( (a < 0) && (b > 0) ) || ( (a > 0) && (b < 0) )  )) flag++;
    cout << a + b + flag;
}

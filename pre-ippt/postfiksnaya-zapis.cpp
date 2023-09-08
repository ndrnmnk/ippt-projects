#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    char c;
    int a, b;
    stack <int> stak;
    while (cin >> c) {
        if ((c >= '0') && (c <= '9')) stak.push(c - '0');
        if (c == '+') {
            b = stak.top();
            stak.pop();
            a = stak.top();
            stak.pop();
            stak.push(a+b);
        }
        if (c == '-') {
            b = stak.top();
            stak.pop();
            a = stak.top();
            stak.pop();
            stak.push(a-b);
        }
        if (c == '*') {
            b = stak.top();
            stak.pop();
            a = stak.top();
            stak.pop();
            stak.push(a*b);
        }
    }
cout << stak.top();
}

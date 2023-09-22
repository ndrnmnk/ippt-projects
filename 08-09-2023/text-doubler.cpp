#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) cout << s[i] << s[i];
}

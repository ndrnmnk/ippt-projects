#include <iostream>
#include <stack>

using namespace std;

int main() {
stack<char> stak;
string inp;
bool flag = 0;
cin >> inp;
for (int i = 0; i < inp.length(); i++)
    if ((inp[i] != ')') && (inp[i] != ']') && (inp[i] != '}'))
        stak.push(inp[i]);
    else
        if (stak.size() == 0) flag = 1; else
            if ((inp[i] == ')') && (stak.top() == '(')) stak.pop(); else
                if ((inp[i] == ']') && (stak.top() == '[')) stak.pop(); else
                    if ((inp[i] == '}') && (stak.top() == '{')) stak.pop(); else {
                        flag = 1;
                        break;
                    }

if ((stak.size() == 0) && (flag == 0)) cout << "YES" << endl; else cout << "NO" << endl;
}

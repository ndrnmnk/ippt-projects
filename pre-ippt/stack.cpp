#include <iostream>
#include <stack>

using namespace std;

int main() {
stack<int> stac;
int n = 0;
string inp;
while (1) {
    cin >> inp;
    if (inp == "push") { cin >> n; stac.push(n); cout << "ok" << endl; };
    if (inp == "pop") { if (!stac.empty()) { cout << stac.top() << endl; stac.pop(); } else cout << "error\n"; };
    if (inp == "back") { if (!stac.empty()) cout << stac.top() << endl; else cout << "error\n"; };
    if (inp == "size") { cout << stac.size() << endl; };
    if (inp == "clear") { for (n = stac.size(); n > 0; n--) stac.pop(); cout << "ok" << endl; }
    if (inp == "exit") { cout << "bye" << endl; break; };
    }
}

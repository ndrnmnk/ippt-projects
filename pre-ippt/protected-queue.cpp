#include <iostream>
#include <queue>

using namespace std;

std::queue <int> Q;

int main()
{
    int n = 0;
    string inp;
    while (1) {
    cin >> inp;
    if (inp == "push") { cin >> n; Q.push(n); cout << "ok" << endl; };
    if (inp == "pop") { if (!Q.empty()) { cout << Q.front() << endl; Q.pop(); } else cout << "error" << endl; };
    if (inp == "front") {if (!Q.empty()) cout << Q.front() << endl; else cout << "error" << endl; };
    if (inp == "size") { cout << Q.size() << endl; };
    if (inp == "clear") { while (!Q.empty()) Q.pop(); cout << "ok" << endl; }
    if (inp == "exit") { cout << "bye" << endl; break; };
    }
    return 0;
}
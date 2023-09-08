#include <iostream>
#include <deque>

using namespace std;

std::deque <int> Q;

int main()
{
    int n = 0;
    string inp;
    while (1) {
    cin >> inp;
    if (inp == "push_front") { cin >> n; Q.push_front(n); cout << "ok" << endl; };
    if (inp == "push_back") { cin >> n; Q.push_back(n); cout << "ok" << endl; };
    if (inp == "pop_back") { if (!Q.empty()) { cout << Q.back() << endl; Q.pop_back(); } else cout << "error" << endl; };
    if (inp == "pop_front") { if (!Q.empty()) { cout << Q.front() << endl; Q.pop_front(); } else cout << "error" << endl; };
    if (inp == "front") {if (!Q.empty()) cout << Q.front() << endl; else cout << "error" << endl; };
    if (inp == "back") {if (!Q.empty()) cout << Q.back() << endl; else cout << "error" << endl; };
    if (inp == "size") { cout << Q.size() << endl; };
    if (inp == "clear") { while (!Q.empty()) Q.pop_back(); cout << "ok" << endl; }
    if (inp == "exit") { cout << "bye" << endl; break; };
    }
    return 0;
}
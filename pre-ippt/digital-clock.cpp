#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cout << (t % 86400 / 3600) / 10 << (t % 86400 / 3600) % 10 << ":" << (t % 3600 / 60) / 10 << (t % 3600 / 60) % 10 << ":" << (t % 60) / 10 << (t % 60) % 10 << "\n";
}

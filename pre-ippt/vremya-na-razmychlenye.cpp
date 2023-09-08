#include <iostream>
using namespace std;

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    if (h*3600+m*60+s < 40271)
    cout << 40271 - h*3600-m*60-s;
    else
    cout << 40271+86400  - h*3600-m*60-s;
}

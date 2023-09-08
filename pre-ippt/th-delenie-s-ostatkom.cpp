#include <iostream>
using namespace std;

int main(){
    int a, b, q, r = 0;
    cin >> a >> b;
    q = a / b;
    r = a-(b*q);
    cout << q << " " << r;
}

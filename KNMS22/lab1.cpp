#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Введіть x1, y1, x2, y2:";
    cin >> x1 >> y1 >> x2 >> y2;
    double p = abs(x2-x1)*2 + abs(y2-y1)*2;
    double s = abs(x2-x1)*abs(y2-y1);
    cout << "S = " << s << "; P = " << p;
}

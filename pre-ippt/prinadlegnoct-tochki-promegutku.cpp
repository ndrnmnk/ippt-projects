#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct tpoint {
double x, y;
};

double dist (tpoint a, tpoint b) {
    return sqrt(  (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y)  );
}

struct tline {
tpoint p1, p2;
double len = dist(p1, p2);
};


int main()
{
    tpoint a, b, c = {};
    double s, p, distluch, distotr, distpr, k, l = 0;
    cin >> c.x >> c.y >> a.x >> a.y >> b.x >> b.y;
    tline ab, bc, ca;
    ab.p1 = a; ab.p2 = b; ab.len = dist(a, b);
    bc.p1 = b; bc.p2 = c; bc.len = dist(b, c);
    ca.p1 = c; ca.p2 = a; ca.len = dist(c, a);

    p = (ab.len + bc.len + ca.len) / 2;
    s = sqrt(p * (p-ab.len) * (p-bc.len) * (p-ca.len));
    ///////////////////////////////////////
    if (abs(s) <= 0.0000001) cout << "YES" << endl;
    else cout << "NO" << endl;
    if ((abs(s) <= 0.0000001) && ((abs(ca.len-bc.len-ab.len) <= 0.0000001) || (abs(ab.len-ca.len-bc.len) <= 0.0000001))) cout << "YES" << endl;
    else cout << "NO" << endl;
    if ((abs(s) <= 0.0000001) && (abs(ab.len-ca.len-bc.len) <= 0.0000001)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
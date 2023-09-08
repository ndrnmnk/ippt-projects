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
    tpoint a = {}, b = {}, c = {};
    double s = 0, distpr = 0, distluch = 0, distotr = 0;
    cin >> c.x >> c.y >> a.x >> a.y >> b.x >> b.y;
    tline ab = {}, bc = {}, ca = {};
    ab.p1 = a; ab.p2 = b; ab.len = dist(a, b);
    bc.p1 = b; bc.p2 = c; bc.len = dist(b, c);
    ca.p1 = c; ca.p2 = a; ca.len = dist(c, a);

    s = (b.x - a.x)*(b.y + a.y)/2 + (c.x - b.x)*(c.y + b.y)/2 + (a.x - c.x)*(c.y + a.y)/2;
    s = abs(s);

    distpr=s/ab.len*2;

    if (ab.len*ab.len + ca.len*ca.len <= bc.len*bc.len) distluch = ca.len;
    else distluch = distpr;

    if (ab.len*ab.len + ca.len*ca.len > bc.len*bc.len) distotr = distpr;
    if (ab.len*ab.len + ca.len*ca.len <= bc.len*bc.len) distotr=ca.len;
    if (ab.len*ab.len + bc.len*bc.len <= ca.len*ca.len) distotr=bc.len;

    cout << setprecision(9) << fixed << distpr << endl << distluch << endl << distotr;
}
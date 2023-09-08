#include <iostream>
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
double len;
};

double s (tpoint a, tpoint b, tpoint c) {
    return (b.x - a.x)*(b.y + a.y)/2 + (c.x - b.x)*(c.y + b.y)/2 + (a.x - c.x)*(c.y + a.y)/2;
}

int main()
{
    tpoint a, b, c, d = {};
    tline ab, bc, ca, ad, bd, cd;
    double sabc, sabd, sacd, sbcd;
    bool flag = 0;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
    ab.p1 = a; ab.p2 = b; ab.len = dist(a, b);
    bc.p1 = b; bc.p2 = c; bc.len = dist(b, c);
    ca.p1 = c; ca.p2 = a; ca.len = dist(c, a);
    ad.p1 = a; ad.p2 = d; ad.len = dist(a, d);
    bd.p1 = b; bd.p2 = d; bd.len = dist(b, d);
    cd.p1 = c; cd.p2 = d; cd.len = dist(c, d);

    sabc = s(a, b, c); sabd = s(a, b, d);
    sacd = s(a, c, d); sbcd = s(b, c, d);

    if (((sabc < 0) && (sabd < 0)) || ((sabc > 0) && (sabd > 0))) flag = 1;
    if (((sacd < 0) && (sbcd < 0)) || ((sacd > 0) && (sbcd > 0))) flag = 1;

    if (flag == 0) cout << "YES" << endl; else cout << "NO";
}
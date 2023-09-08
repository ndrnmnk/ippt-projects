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

int main()
{
    tpoint a, b, c, d = {};
    tline ab, bc, ca, ad, bd, cd;
    double p, p1, p2, p3, s, s1, s2, s3;
    int dots, outp = 0;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    cin >> dots;
    for (int i = 0; i < dots; i++) {
    cin >> d.x >> d.y;
    ab.p1 = a; ab.p2 = b; ab.len = dist(a, b);
    bc.p1 = b; bc.p2 = c; bc.len = dist(b, c);
    ca.p1 = c; ca.p2 = a; ca.len = dist(c, a);
    ad.p1 = a; ad.p2 = d; ad.len = dist(a, d);
    bd.p1 = b; bd.p2 = d; bd.len = dist(b, d);
    cd.p1 = c; cd.p2 = d; cd.len = dist(c, d);
    
    p = (ab.len + bc.len + ca.len) / 2;
    p1 = (ab.len + ad.len + bd.len) / 2;
    p2 = (bc.len + bd.len + cd.len) / 2;
    p3 = (ca.len + ad.len + cd.len) / 2;
    
    s = sqrt(p * (p-ab.len) * (p-bc.len) * (p-ca.len));
    s1 = sqrt(p1 * (p1-ab.len) * (p1-bd.len) * (p1-ad.len));
    s2 = sqrt(p2 * (p2-bc.len) * (p2-bd.len) * (p2-cd.len));
    s3 = sqrt(p3 * (p3-ad.len) * (p3-cd.len) * (p3-ca.len));
    
    if (abs(s1 + s2 + s3 - s) <= 0.1) outp++;
    }
    cout << outp;
}
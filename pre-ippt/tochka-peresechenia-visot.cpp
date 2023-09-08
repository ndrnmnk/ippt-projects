#include <bits/stdc++.h>

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

void Kramer(double a1, double b1, double c1, double a2, double b2, double c2, double &x, double &y)
{
    double prost, prost_x, prost_y;
    prost = a1 * b2 - a2 * b1;
    prost_x = c1 * b2 - c2 * b1;
    prost_y = a1 * c2 - a2 * c1;
    x = prost_x / prost;
    y = prost_y / prost;
}

int main()
{
    double A1, B1, C1, A2, B2, C2;
    tpoint a, b, c, p;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    A1 = c.x - b.x;
    B1 = c.y - b.y;
    C1 = a.x * (c.x - b.x) + a.y * (c.y - b.y);
    A2 = c.x - a.x;
    B2 = c.y - a.y;
    C2 = b.x * (c.x - a.x) + b.y * (c.y - a.y);
    Kramer(A1, B1, C1, A2, B2, C2, p.x, p.y);
    cout << fixed << setprecision(6);
    cout << p.x << ' ' << p.y;
}
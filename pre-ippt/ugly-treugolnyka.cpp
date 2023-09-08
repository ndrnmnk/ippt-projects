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
double len;
};

int main()
{
    double alfa, beta, gamma;
    tpoint a, b, c = {};
    cin >> c.x >> c.y >> a.x >> a.y >> b.x >> b.y;
    tline ab, bc, ca;
    ab.p1 = a; ab.p2 = b; ab.len = dist(a, b);
    bc.p1 = b; bc.p2 = c; bc.len = dist(b, c);
    ca.p1 = c; ca.p2 = a; ca.len = dist(c, a);


    alfa = acos((bc.len*bc.len + ca.len*ca.len - ab.len*ab.len) / (2*bc.len*ca.len)) * 180/M_PI;
    beta = acos((ab.len*ab.len + ca.len*ca.len - bc.len*bc.len) / (2*ab.len*ca.len)) * 180/M_PI;
    gamma = acos((ab.len*ab.len + bc.len*bc.len - ca.len*ca.len) / (2*ab.len*bc.len)) * 180/M_PI;

    //
    if ((alfa >= beta) && (alfa >= gamma)) cout << setprecision(6) << fixed << alfa;
    if ((beta > alfa) && (beta >= gamma)) cout << setprecision(6) << fixed << beta;
    if ((gamma > alfa) && (gamma > beta)) cout << setprecision(6) << fixed << gamma;
}
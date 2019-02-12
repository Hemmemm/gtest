#include "findroots.h"

Roots findRoots(double a, double b, double c)
{
    double dis = b * b - 4 * a * c;
    Roots r;
    if (dis < 0)
    {
        r.found = 0;
    }
    else
    {
        r.found = 1;
        r.x1 = (-b + pow(dis, 1.0/2.0)) / (2.0 * a);
        r.x2 = (-b - pow(dis, 1.0/2.0)) / (2.0 * a);
    }
    return r;
}

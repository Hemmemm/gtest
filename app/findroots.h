#ifndef FINDROOTS_H
#define FINDROOTS_H
#include <math.h>
#include <stdio.h>

typedef struct
{
    double x1;
    double x2;
    int found;
} Roots;

Roots findRoots(double a, double b, double c);

#endif // FINDROOTS_H

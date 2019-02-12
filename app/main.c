#include <stdio.h>

#include "myfunc.h"
#include "findroots.h"

int main()
{
    printf("Hello World!\n");
    Roots r = findRoots(1, 2, 1);
    if (r.found)
    {
        printf("%f %f\n", r.x1, r.x2);
    }
    else
    {
        printf("D < 0");
    }
    return myfunc(2);
}

#include <stdio.h>
#include <math.h>
#include "func.h"
int main()
{
    double a, b, c; printf("a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || c + a <= b)
       {

        printf("netu takogo treuglnika");
        }
    else
        {printf("perimetr %g\n", perimetr(a,b,c));
        printf("plosad %g\n",ploshad(a,b,c));
        }
}

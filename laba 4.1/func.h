#include <stdio.h>
#include <math.h>
double perimetr(double x, double y,double z)
{
 double p = x+y+z;
 return p;
}
double ploshad(double x, double y,double z)
{

    double pl=(x+y+z)/2;
    double plos =sqrt(pl * (pl - x) * (pl - y) * (pl - z));
    return plos;

}


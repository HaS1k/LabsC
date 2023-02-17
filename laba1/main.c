#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a,b,c,d,x1,x2;
   printf ("vvedite a,b,c\n");
   scanf ("%f %f %f", &a, &b, &c);
   d = pow(b,2)-4*a*c;

   if (d > 0)
   {
       x1 =(-b + sqrt(d))/2*a;
       x2 =(-b - sqrt(d))/2*a;
       printf ("x1=%f\nx2=%f\n", x1, x2);
   }
   else if (d==0)
    {
      x1 = -b/2*a;
      printf ("x=%f\n", x1);
    }
    else if (d<0)
    {
        printf("diskriminant menshe chem nol");
    }



   return 0;



}

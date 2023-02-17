#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a[1][1],b[1][1];
    int i,j;
    for (i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("vvedite element matritsi [%d][%d]", i, j);
                scanf("%d", &a[i][j]);
                printf("\n");
            }

        }
    printf ("massive\n");
    for (int k=0; k<2; k++)
        {
            for(int h=0; h<2; h++)
            {
                printf("%d ", a[k][h]);
            }
        printf("\n");
        }
    b[0][0]=pow(b[0][0],2);
    b[0][1]=pow(b[0][1],2);
    b[1][0]=pow(b[1][0],2);
    b[1][1]=pow(b[1][1],2);
    printf ("massive\n");
    for (int d=0; d<2; d++)
        {
            for(int l=0; l<2; l++)
            {
                printf("%d ", b[d][l]);
            }
        printf("\n");
        }

}

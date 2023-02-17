#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a[2][2];
    int i,j;
    int sum1 = 0, sum2 = 0;
    for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("vvedite element matritsi [%d][%d]", i, j);
                scanf("%d", &a[i][j]);
                printf("\n");
            }

        }
    printf ("massive\n");
    for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d ", a[i][j]);
            }
        printf("\n");
        }
    for(int x = 0; x < 3; x++)
        {
            for(int y = 0; y < 3; y++)
            {
                if(x == y) sum1 += a[x][y];
                if(x == 3 - 1 - y) sum2 += a[x][y];
            }
        }




    printf("summ glav diagonali %d.\n", sum1);
    printf("summ poboch diagonali %d.\n", sum2);

}

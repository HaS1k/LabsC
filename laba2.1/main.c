#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("vvedite razmer\n");
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    int i,j;
    int sum1 = 0, sum2 = 0;
    for (i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("vvedite element matritsi [%d][%d]", i, j);
                scanf("%d", &a[i][j]);
                printf("\n");
            }

        }
    printf ("massive\n");
    for (i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", a[i][j]);
            }
        printf("\n");
        }
    for(int x = 0; x < m; x++)
        {
            for(int y = 0; y < n; y++)
            {
                if(x == y) sum1 += a[x][y];
                if(x == n - 1 - y) sum2 += a[x][y];
            }
        }




    printf("summ glav diagonali %d.\n", sum1);
    printf("summ poboch diagonali %d.\n", sum2);

}

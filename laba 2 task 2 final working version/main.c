

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int i,j,p;


  setlocale(LC_ALL, "Rus");
  int n;
  printf("введите размер: ");
  scanf("%d", &n);
  int mat1[n][n];
  int answ[n][n];
      for (i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("введите элемент матрицы [%d][%d]", i, j);
                scanf("%d", &mat1[i][j]);
                printf("\n");
            }

        }




        for (int i=0; i < n; i++){
            for(int j = 0; j<n; j++){
                answ[i][j] = 0;
                for(int p=0; p<n; p++){
                    answ[i][j] += mat1[i][p]*mat1[p][j];

            }
        }
        }

            printf ("матрица в квадрате:\n");
    for (i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", answ[i][j]);
            }
        printf("\n");
        }
}

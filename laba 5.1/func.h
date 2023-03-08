#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

double** newm(int n){
    double** matrix = calloc(n, sizeof(double*));
    for(int i = 0; i < n; i++){
        matrix[i] = calloc(n, sizeof(double));
    }
    return matrix;
}

void input(int n, double **mat){
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            printf("mat[%d][%d]", i+1, j+1);
            scanf("%lf", &mat[i][j]);
        }
    }
}
void output(int n, double **mat){
    int i, j;
    for(i = 0; i<n; i++){
        for(j =0; j<n; j++){
            printf("%lf\t", mat[i][j]);
        }
        printf("\n");
    }
}
double** ans(int n, double **mat1, double **mat2, char c){
    double **answ = newm(n);

    if (c == '-'){
        for (int i=0; i < n; i++){
            for(int j = 0; j<n; j++){
                answ[i][j] = mat1[i][j]-mat2[i][j];
            }
        }
        return answ;
    }

    else if (c == '+'){
        for (int i=0; i < n; i++){
            for(int j = 0; j<n; j++){
                answ[i][j] = mat1[i][j]+mat2[i][j];
            }
        }
        return answ;
    }

    else if (c == '*'){
        for (int i=0; i < n; i++){
            for(int j = 0; j<n; j++){
                answ[i][j] = 0;
                for(int p=0; p<n; p++){
                    answ[i][j] += mat1[i][p]*mat2[p][j];
                }
            }
        }
        return answ;
    }
    else{
        return answ;
    }
for(int i = 0; i < n; i++) {
    free(answ[i]);
}
free(answ);

}

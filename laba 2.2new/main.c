#include <stdio.h>

int main() {
    int i, j, rows, cols, power;
    printf("vvedite stroki: ");
    scanf("%d", &rows);
    printf("Âvvedite stolbtsi: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("vvedite elementi %dx%d:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("vvedite stepen: ");
    scanf("%d", &power);

    int result[rows][cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix[i][j];
        }
    }

    for (i = 1; i < power; i++) {
        int temp[rows][cols];
        for (int m = 0; m < rows; m++) {
            for (int n = 0; n < cols; n++) {
                temp[m][n] = 0;
                for (int k = 0; k < cols; k++) {
                    temp[m][n] += result[m][k] * matrix[k][n];
                }
            }
        }
        for (int m = 0; m < rows; m++) {
            for (int n = 0; n < cols; n++) {
                result[m][n] = temp[m][n];
            }
        }
    }

    printf("matrix %d:\n", power);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

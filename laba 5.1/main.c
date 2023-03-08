#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "func.h"
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Rus");
  int n;
  char c;
  printf("Введите размер: ");
  scanf("%d", &n);



  double **a =newm(n);
  double **b =newm(n);
  printf("введите значения матрицы 1\n");
  input(n,a);
  printf("введите значения матрицы 2\n");
  input(n,b);



  printf("Выберите операцию ('-','+','*')\n");
  scanf(" %c", &c);
  output(n, ans(n, a, b, c));
  return 0;
for(int i = 0; i < n; i++) {
    free(a[i]);
}
free(a);
for(int i = 0; i < n; i++) {
    free(b[i]);
}
free(b);


}

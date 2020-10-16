/* Afișarea elementelor de sub/deasupra diagonalei principale/secundare
a unei matrici n*n */

#include <stdio.h>

int main() {
  int i, j, n=4;

  int a[4][4] = {
    {2, 3, 4, 5},
    {9, 8, 7, 1},
    {12, 2, 99, 17},
    {33, 4, 11, 54}
  };

  printf("Elements above Main Diagonal: ");
  for (i = 0; i < n; i++) {
    for (j = 1; j < n; j++){
      if (i == j-1){
        printf("%d ", a[i][j]);
      }
    }
  }

  printf("\nElements below Main Diagonal: ");
  for (i = 1; i < n; i++) {
    for (j = 0; j < n; j++){
      if (i-1 == j){
        printf("%d ", a[i][j]);
      }
    }
  }

  printf("\nElements above Secondary Diagonal: ");
  for (i = 0; i < n-1; i++) {
    for (j = 0; j < n; j++){
      if (i + j == n - 1){
        printf("%d ", a[i][j-1]);
      }
    }
  }

  printf("\nElements below Secondary Diagonal: ");
  for (i = 1; i < n; i++) {
    for (j = 0; j < n-1; j++){
      if (i + j == n - 1){
        printf("%d ", a[i][j+1]);
      }
    }
  }

  printf("\n");

  return 0;
}

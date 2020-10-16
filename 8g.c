/* Afișarea elementelor de pe diagonala principala/secundara
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

  printf("Main Diagonal: ");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++){
      if (i == j){
        printf("%d ", a[i][j]);
      }
    }
  }

  printf("\n\nSecondary Diagonal: ");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++){
      if (i + j == n - 1){
        printf("%d ", a[i][j]);
      }
    }
  }

  printf("\n");

  return 0;
}

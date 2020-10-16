/*  Afisarea celui mai mic/mare element al unei matrici n*n,
aflat pe diagonala principala/secundara */

#include <stdio.h>
#include <limits.h>

int main() {
  int i, j, n=4;

  int a[4][4] = {
    {2, 3, 4, 5},
    {9, 8, 7, 1},
    {12, 1, 99, 17},
    {33, 4, 11, 54}
  };

  int minp = a[0][0];
  int mins = INT_MAX;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++){
      if (i == j){
        if (a[i][j] < minp){
          minp = a[i][j];
        }
      }
    }
  }
  printf("Min elem from Main Diagonal: %d\n", minp);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++){
      if (i + j == n - 1){
        if (a[i][j] < mins){
          mins = a[i][j];
        }
      }
    }
  }
  printf("\nMin elem from Secondary Diagonal: %d\n", mins);

  return 0;
}

/*   Afisarea sumei elementelor unei matrici n*n aflate sub/deasupra
diagonalei principale/secundare */

#include <stdio.h>

int main() {
  int i, j, n=4;

  int a[4][4] = {
    {2, 3, 4, 5},
    {9, 8, 7, 1},
    {12, 1, 99, 17},
    {33, 4, 11, 54}
  };

  // Main Diagonal
  int sump = 0;
  int sumap = 0;
  int sumbp = 0;

  // Sum Main Diagonal
  for (i = 0; i < n; i++){
    for (i = 0; j < n; j++){
      if (i == j){
        sump += a[i][j];
      }
    }
  }
  printf("Sum of elementes from Main Diagonal: %d\n", sump);

  // Sum Above Main Diagonal
  for (i = 0; i < n; i++) {
    for (j = 1; j < n; j++){
      if (i == j-1){
        sumap += a[i][j];
      }
    }
  }
  printf("Sum of elements above Main Diagonal: %d\n", sumap);

  // Sum Below Main diagonal
  for (i = 1; i < n; i++) {
    for (j = 0; j < n; j++){
      if (i-1 == j){
        sumbp += a[i][j];
      }
    }
  }
  printf("Sum of elements below Main Diagonal: %d\n", sumbp);

  // Secondary Diagonal
  int sums = 0;
  int sumas = 0;
  int sumbs = 0;

  // Sum Secondary Diagonal
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++){
      if (i + j == n - 1){
        sums += a[i][j];
      }
    }
  }
  printf("\nSum of elements from Secondary Diagonal: %d\n", sums);

  // Sum Above Secondary Diagonal
  for (i = 0; i < n-1; i++) {
    for (j = 0; j < n; j++){
      if (i + j == n - 1){
        sumas += a[i][j-1];
      }
    }
  }
  printf("Sum of elements above Secondary Diagonal: %d\n", sumas);

  // Sum Below Secondary Diagonal
  for (i = 1; i < n; i++) {
    for (j = 0; j < n-1; j++){
      if (i + j == n - 1){
        sumbs += a[i][j+1];
      }
    }
  }
  printf("Sum of elements below Secondary Diagonal: %d\n", sumbs);

  return 0;
}

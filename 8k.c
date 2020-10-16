/*   Afișarea celui mai mic/mare element al fiecarei linii/coloane
a unei matrici n*n */

#include <stdio.h>
#include <limits.h>

int main() {
  int i, j, n=4;

  int a[4][4] = {
    {2, 3, 4, 5},
    {9, 8, 7, 1},
    {12, 9, 99, 17},
    {33, 4, 11, 54}
  };

  // Print Min From Every Row
  for (i = 0; i < n; i++){
    int min_row = INT_MAX;
    int max_row = 0;
    printf("Row %d:\t\t[ ", i);
    for (j = 0; j < n; j++){
      printf("%d ", a[i][j]);
      if (a[i][j] < min_row){
        min_row = a[i][j];
      }
      if (a[i][j] > max_row){
        max_row = a[i][j];
      }
    }
    printf("]\t- Min: %d\t- Max: %d\n", min_row, max_row);
  }

  //Print Min From Every Cols
  for (i = 0; i < n; i++){
    int min_col = INT_MAX;
    int max_col = 0;
    printf("Column %d:\t[ ", i);
    for (j = 0; j < n; j++){
      printf("%d ", a[j][i]);
      if (a[j][i] < min_col){
        min_col = a[j][i];
      }
      if (a[j][i] > max_col){
        max_col = a[j][i];
      }
    }
    printf("]\t- Min: %d\t- Max: %d\n", min_col, max_col);
  }

  return 0;
}

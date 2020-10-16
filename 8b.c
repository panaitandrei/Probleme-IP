// Afisarea unei matrici patratice de n*n

#include <stdio.h>

int main() {
  int i, j;

  int arr[3][3] = {
    {2, 3, 4},
    {9, 8, 7},
    {12, 2, 99}
  };

  for (i = 0; i < 3; i++) {
    printf("Row %d \n", i);
    for (j = 0; j < 3; j++) {
      printf("Col: %d, Elem: %d\n", j, arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

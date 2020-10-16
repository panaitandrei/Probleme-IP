// Afisarea unei matrici n*m

#include <stdio.h>

int main() {
  int i, j;

  int arr[2][3] = {
    {2, 3, 4},
    {9, 8, 7}
  };

  for (i = 0; i < 2; i++) {
    printf("Row %d \n", i);
    for (j = 0; j < 3; j++) {
      printf("Col: %d, Elem: %d\n", j, arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

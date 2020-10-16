/* Afișarea sumei elementelor pare/impare ale fiecărei linii/coloane
a unei matrici n*n */

#include <stdio.h>

int main() {
  int i, j, sum_odd=0, sum_even=0;

  int arr[3][3] = {
    {2, 3, 4},
    {9, 8, 7},
    {12, 2, 99}
  };

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (arr[i][j] % 2 == 0) {
        sum_even += arr[i][j];
      }else{
        sum_odd += arr[i][j];
      }
    }
  }

  printf("Sum of evens: %d\n", sum_even);
  printf("Sum of odds: %d\n", sum_odd);

  return 0;
}

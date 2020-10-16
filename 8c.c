// Afișarea sumei tuturor elementelor unei matrici pătratice de n*n

#include <stdio.h>

int main() {
  int i, j, sum=0;

  int arr[3][3] = {
    {2, 3, 4},
    {9, 8, 7},
    {12, 2, 99}
  };

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      sum += arr[i][j];
    }
  }

  printf("Sum: %d\n", sum);
  return 0;
}

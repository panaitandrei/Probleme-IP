// Suma elementelor unui vector de int

#include <stdio.h>

int main() {
  int i, s;
  int a[5] = {10, 23, 1, 24, 77};

  for (i = 0; i < 5; i++){
    s += a[i];
  }

  printf("Sum: %d\n", s);
  return 0;
}

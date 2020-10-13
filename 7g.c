// Afișați elementele de pe pozițiile multiplii lui x ale unui vector

#include <stdio.h>

int main() {
  int i, x;
  int a[10] = {17, 8, 98, 69, 45, 10, 23, 7, 24, 77};

  printf("Multiple for >> ");
  scanf("%d", &x);

  for (i = 0; i < 10; i += x){
    printf("Pos: %d - Elem: %d\n", i, a[i]);
  }

  return 0;
}

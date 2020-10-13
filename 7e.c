// Afisati elementele pare ale unui vector de int

#include <stdio.h>

int main() {
  int i;
  int a[5] = {10, 23, 7, 24, 77};

  for (i = 0; i < 5; i++){
    if (a[i] % 2 == 0){
      printf("%d\n", a[i]);
    }
  }

  return 0;
}

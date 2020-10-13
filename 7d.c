// Max/min elementelor unui vector de int

#include <stdio.h>

int main() {
  int i, min, max=0;
  int a[5] = {10, 23, 7, 24, 77};

  min = a[0];

  for (i = 0; i < 5; i++){
    if (a[i] < min){
      min = a[i];
    }

    if (a[i] > max){
      max = a[i];
    }
  }

  printf("Min: %d\nMax: %d\n", min, max);

  return 0;
}

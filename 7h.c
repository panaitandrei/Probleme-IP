// Afisati elementele multipli ai lui x dintr-un vector

#include <stdio.h>

int is_multiple(int num, int multiple);

int main() {
  int i, x;
  int a[10] = {17, 8, 98, 69, 45, 10, 23, 7, 24, 77};

  printf("Multiple for >> ");
  scanf("%d", &x);

  for (i = 0; i < 10; i += x){
    if (is_multiple(a[i], x)){
      printf("Elem %d (pos: %d) is multiple of %d\n", a[i], i, x);
    }
  }

  return 0;
}

int is_multiple(int num, int multiple){
  while(num > 0){
    num -= multiple;
  }

  if (num == 0){
    return(1);
  }

  return(0);
}

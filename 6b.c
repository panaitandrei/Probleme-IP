// S2 = 3*6*9*12*…*3*n

#include <stdio.h>

int main() {
  int n, i, s=1;

  printf("S2 = 3*6*9*12*…*3*n\n\n");

  do{
    printf("Enter n (n > 3): ");
    scanf("%d", &n);
  }while(n < 3);

  for (i = 3; i <= n; i+=3){
    s *= i;
  }

  printf("S2 = %d\n", s);

  return 0;
}

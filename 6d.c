// S4 = 1+1*2+1*2*3+1*2*3*4+…+1*2*3*4*…*n

#include <stdio.h>

int main() {
  int n, i, j, p=1, s=0;

  printf("S4 = 1+1*2+1*2*3+1*2*3*4+…+1*2*3*4*…*n\n\n");

  do{
    printf("Enter n (n > 0): ");
    scanf("%d", &n);
  }while(n < 0);

  for (i = 1; i <= n; i++){
    for (j = 1; j <= i; j++){
      p *= j;
    }
    s += p;
    p = 1;
  }

  printf("S4 = %d\n", s);

  return 0;
}

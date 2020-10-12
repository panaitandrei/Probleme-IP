// S7 = 2*3+4*5+…+100*101+n*(n+1)

#include <stdio.h>

int main() {
  int n, i, p=1, s=0;

  printf("S7 = 2*3+4*5+…+100*101+n*(n+1)\n\n");

  do{
    printf("Enter n (n >= 2): ");
    scanf("%d", &n);
  }while(n < 2);

  for (i = 2; i <= n; i += 2){
    p *= i * (i + 1);
    s += p;
    p = 1;
  }

  printf("S6 = %d\n", s);

  return 0;
}

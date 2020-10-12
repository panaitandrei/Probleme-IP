// S6 = ½+2/3+3/4+…+n/(n+1)

#include <stdio.h>

int main() {
  int n;
  float i, c, s=0;

  printf("S6 = 1/2+2/3+3/4+…+n/(n+1)\n\n");

  do{
    printf("Enter n (n > 0): ");
    scanf("%d", &n);
  }while(n < 1);

  for (i = 1; i <= n; i++){
    c = i / (i+1);
    s += c;
  }

  printf("S5 = %.2f\n", s);

  return 0;
}

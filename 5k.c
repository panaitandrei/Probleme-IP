/* Se parcurge un interval [a,b], cu a>10.
Calculati suma cifrei zecilor a fiecarui numar din interval. */

#include <stdio.h>

int main() {
  int a, b, i, sum=0;

  do{
    printf("Interval start: ");
    scanf("%d", &a);
  }while (a < 10);

  do{
    printf("Interval end: ");
    scanf("%d", &b);
  }while(b <= a);

  for (i = a; i <= b; i++){
    sum += i / 10 % 10;
  }

  printf("%d is the sum of number of thens from interval [%d-%d]\n", sum, a, b);

  return 0;
}

/* Se parcurge un interval [a,b].
Calculati suma numerelor impare din interval. */

#include <stdio.h>

int main() {
  int a, b, i, sum=0;

  printf("Interval start: ");
  scanf("%d", &a);

  printf("Interval end: ");
  scanf("%d", &b);

  for (i = a; i <= b; i++){
    if (i % 2 != 0){
      sum += i;
    }
  }

  printf("%d is the sum of odd numbers from interval [%d-%d]\n", sum, a, b);

  return 0;
}

/* Se parcurge un interval [a,b].
Cate numere din interval se termina cu cifra k? */

#include <stdio.h>

int main() {
  int a, b, k, i, count=0;

  printf("Interval start: ");
  scanf("%d", &a);

  printf("Interval end: ");
  scanf("%d", &b);

  printf("Last Digit: ");
  scanf("%d", &k);

  for (i = a; i <= b; i++){
    if (i % 10 == k){
      count++;
    }
  }

  printf("%d numbers from interval [%d-%d] end with %d\n", count, a, b, k);

  return 0;
}

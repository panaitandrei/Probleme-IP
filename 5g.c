/* Fie un numar natural n.
Determinati si afisati numerele prime mai mici sau egale cu n. */

#include <stdio.h>

int main() {
  int n, i;
  printf("Insert n >> ");
  scanf("%d", &n);

  printf("Prime numbers <= %d:\n", n);

  if (n == 1){
    printf("%d\n", n);
  }else if(n == 2){
    printf("1\n2\n");
  }else{
    // Find and print all prime numbers <= n
    for (i = 1; i <= n; i++){
      if (n % i == 0){
        printf("%d\n", i);
      }
    }
  }

  return 0;
}

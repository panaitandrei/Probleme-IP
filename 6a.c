// S1 = 7+14+21+…+7*n

#include <stdio.h>

int main() {
  int n, i, sum=0;

  printf("S1 = 7+14+21+…+7*n\n\n");

  do{
    printf("Enter n (n > 7): ");
    scanf("%d", &n);
  }while(n < 7);

  for (i = 7; i <= n; i+=7){
    sum += i;
  }

  printf("S1 = %d\n", sum);

  return 0;
}

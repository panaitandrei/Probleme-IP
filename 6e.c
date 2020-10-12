// S5 = 12+22+32+…+(n*10+2)

#include <stdio.h>

int main() {
  int n, i, s=0;

  printf("S5 = 12+22+32+…+(n*10+2)\n\n");

  do{
    printf("Enter n (n > 0): ");
    scanf("%d", &n);
  }while(n < 0);

  for (i = 1; i <= n; i++){
    s += i * 10 + 2;
  }

  printf("S5 = %d\n", s);

  return 0;
}

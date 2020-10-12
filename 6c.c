// S3 = 1*2+2*3+3*4+…+(n-1)*n

#include <stdio.h>

int main() {
  int n, i, p=1, s=0;

  printf("S3 = 1*2+2*3+3*4+…+(n-1)*n\n\n");

  do{
    printf("Enter n (n > 0): ");
    scanf("%d", &n);
  }while(n < 0);

  for (i = 1; i <= n; i++){
    p *= i * (i+1);
    s += p;
    p = 1;
  }

  printf("S3 = %d\n", s);

  return 0;
}

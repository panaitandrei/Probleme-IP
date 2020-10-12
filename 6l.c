/* Sa se afiseze primele n numere prime care au suma cifrelor mai mica decat
un numar m, unde n si m sunt numre naturale citite de la tastatura */

#include <stdio.h>

int is_prime(int num);
int digit_sum(int num);

int main(){
  int n, m, i, sum;
  printf("Insert `n` - for number interval [1-n]: ");
  scanf("%d", &n);

  printf("Insert `m` - for sum purpose: ");
  scanf("%d", &m);

  printf("First prime numbers where their sum of digits in equal with `m`:\n");

  for (i = 1; i <= n; i++){
    if (is_prime(i)){
      sum = digit_sum(i);
      if (sum == m){
        printf("%d\n", i);
      }
    }
  }

  return(0);
}

int is_prime(int num){
  // Check if the number is prime
  int i;

  if (num == 1 || num == 2){
    return(1);
  }else{
    for (i = 2; i <= num / 2; i++){
      if (num % i == 0){
        return(0);
      }
    }
  }

  return(1);
}

int digit_sum(int num){
  // Calculate sum of every digit from number
  int sum=0;

  while(num > 0){
    sum += num % 10;
    num /= 10;
  }

  return(sum);
}

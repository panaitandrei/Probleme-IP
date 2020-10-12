// Sa se afiseze toate numerele naturale prime de 4 cifre care au inversul tot numar prim.

#include <stdio.h>

int is_prime(int num);
int reversed(int num);

int main() {
  int i;

  printf("The following numbers are prime and have their reversed number also prime:\n");
  for (i = 1000; i <= 9999; i++){
    if (is_prime(i)){
      if (is_prime(reversed(i))){
        printf("%d\n", i);
      }
    }
  }
  return 0;
}

int is_prime(int num){
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

int reversed(int num){
  int new_num=0;

  while(num > 0){
    new_num += num % 10;
    num /= 10;
    new_num *= 10;
  }

  new_num /= 10;

  return(new_num);
}

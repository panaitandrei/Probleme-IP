/* Se citesc n numere de la tastatura.
Sa se verifice daca toate numerele sunt prime. */

#include <stdio.h>

int is_prime(int num);

int main() {
  int m, i, n, flag=0;

  printf("How many natural numbers would you like to check: ");
  scanf("%d", &m);
  printf("%d numbers will be checked. Enter numbers below: \n", m);

  for(i = 1; i <= m; i++){
    printf("No %d >> ", i);
    scanf("%d", &n);

    if (!is_prime(n)){
      flag = 1;
    }
  }

  if (flag == 1){
    printf("Not all inserted numbers are prime\n");
  }else{
    printf("All inserted numbers are prime\n");
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

// Se citesc n numere naturale. Cate numere prime s-au citit?

#include <stdio.h>

int prime_check(int num);

int main()
{
	int m, i, n, count=0;
  printf("How many natural numbers would you like to check: ");
  scanf("%d", &m);
  printf("%d numbers will be checked. Enter numbers below: \n", m);

  for(i = 1; i <= m; i++){
    printf("No %d >> ", i);
    scanf("%d", &n);
    if (prime_check(n)){
      count++;
    }
  }

  printf("%d prime numbers inserted\n", count);
	return 0;
}

int prime_check(int num){
  int i;
  if (num == 1){
    return(1);
  }else if (num == 2){
    return(1);
  }else{
    for (i = 2; i <= num / 2; i++){
      if (num % i == 0){
        return(0);
      }
    }
  }
}

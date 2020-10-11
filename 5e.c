/* Determinati daca un numar natural este sau nu "perfect".
Un numar este perfect, daca este egal cu suma divizorilor sai mai mici decat el.
Ex. 6 = 1 + 2 + 3. */

#include <stdio.h>

int main(){
  int n, i, sum_div=0;
  printf(">> ");
  scanf("%d", &n);

  for(i=1; i <= n/2; i++){
    if (n % i == 0){
      sum_div += i;
    }
  }

  if(sum_div == n){
    printf("Nr %d este perfect\n", n);
  }else{
    printf("Nr %d nu este perfect\n", n);
  }
  return 0;
}

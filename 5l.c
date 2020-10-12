/* Se citesc n numere naturale.
Sa se verifice daca toate numerle introduse sunt impare. */

#include <stdio.h>

int main()
{
	int m, i, n, flag=0;
  printf("Check if all entered numbres are odd.\n\n");
  
  printf("How many natural numbers would you like to check: ");
  scanf("%d", &m);
  printf("%d numbers will be checked. Enter numbers below: \n", m);

  for(i = 1; i <= m; i++){
    printf("No %d >> ", i);
    scanf("%d", &n);
    if (n % 2 == 0){
      flag = 1;
    }
  }

  if (flag){
    printf("Not all entered numbers are odd\n");
  }else{
    printf("All entered numbers are odd\n");
  }
	return 0;
}

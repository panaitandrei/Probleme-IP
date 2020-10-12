// Suma tuturor nr pozitive citite de la tastatura

#include <stdio.h>

int main(){
	int m, n, i, sum=0;

	printf("How many natural numbers would you like to check: ");
	scanf("%d", &m);
	printf("%d numbers will be checked. Enter numbers below: \n", m);

	for(i = 1; i <= m; i++){
		printf("No %d >> ", i);
		scanf("%d", &n);

    if (n >= 0){      
      sum += n;
    }
	}

	printf("Sum: %d\n", sum);

	return(0);
}

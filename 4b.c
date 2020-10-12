// Max/min a numerelor pozitive citite de la tastatura

#include <stdio.h>

int main(){
	int m, n, i, max=0, min;

	printf("How many natural numbers would you like to check: ");
	scanf("%d", &m);
	printf("%d numbers will be checked. Enter numbers below: \n", m);

	for(i = 1; i <= m; i++){
		printf("No %d >> ", i);
		scanf("%d", &n);

    if (n >= 0){
      if (n < min){
  			min = n;
  		}

  		if (n > max){
  			max = n;
  		}
    }
	}

	printf("Min: %d\nMax: %d\n", min, max);

	return(0);
}

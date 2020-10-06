/* Se dă un număr natural n cu exact trei cifre. 
 * Calculaţi produsul dintre cifra unităților și cifra sutelor. */

#include <stdio.h>

int main(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	if (n < 100 || n > 999){
		printf("Numar invalid.\n");
	} else{
		int prod = (n % 10) * (n / 100 % 10);
		printf("Produsul: %d\n", prod);
	}
	
	return 0;
}
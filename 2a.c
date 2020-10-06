// Calculați ultima cifră a sumei a două numere naturale.

#include <stdio.h>

int main(){
	int a, b;
	
	printf("a = ");
	scanf("%d", &a);
	
	printf("b = ");
	scanf("%d", &b);
	
	int sum = a + b;
	
	printf("Ultima cifra: %d\n", sum % 10);
	
	return 0;
}
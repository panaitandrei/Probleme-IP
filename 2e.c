/* Să se scrie un program care citeşte de la tastatură un număr natural 
 * cu exact trei cifre şi determină numărul obţinut prin eliminarea cifrei din mijloc. */
 
#include <stdio.h>

int main(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	if (n < 100 || n > 999){
		printf("Numar invalid.\n");
	} else{
		printf("%d%d\n", n / 100 % 10, n % 10);
	}
	return 0;
}
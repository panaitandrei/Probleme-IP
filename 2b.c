/* Să se scrie un program care citeşte de la tastatură un număr natural 
 * cu cel puţin două cifre şi determină suma dintre cifra zecilor şi 
 * cifra unităţilor numărului citit. */

#include <stdio.h>

int main(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	if (n < 10){
		printf("Numar invalid. Minim 2 cifre.\n");
	}
	else{
		int sum = (n % 10) + (n % 100 / 10);
		
		printf("Suma: %d\n", sum);
	}
	
	return 0;
}
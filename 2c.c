/* Să se scrie un program care citeşte de la tastatură un număr natural 
 * cu exact trei cifre și determină suma cifrelor sale. */

#include <stdio.h>

int main(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	if (n < 100 || n > 999){
		printf("Numar invalid. Trebuie sa contina exact 3 cifre.\n");
	} else{
		int sum = (n % 10) + (n / 10 % 10) + (n / 100 % 10);
		printf("Suma cifrelor: %d\n", sum);
	}
	
	return 0;
}
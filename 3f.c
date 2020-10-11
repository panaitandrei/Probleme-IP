/* 6. Fie un numar natural.
 * Daca are un numar impar de cifre afisati cifra din mijloc, in caz contrar afisati un mesaj. */

#include <stdio.h>

int main(){
	// input number
	int n;
	printf(">> ");
	scanf("%d", &n);

	// count the digits
	int m = n;
	int count = 0;
	while (m != 0){
		count++;
		m /= 10;
	}

	if (count % 2 == 0){
		printf("The number has even number of digits\n");
	}else{
		// if number has even number of digits get the middle digit
		int middle = count / 2;

		int pow = 1;
		while (middle != 0){
			pow *= 10;
			middle--;
		}

		printf("%d\n", n / pow % 10);
	}

	return 0;
}

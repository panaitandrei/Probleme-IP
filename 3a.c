// Verificati daca un numar are ultima cifra egala cu prima.

#include <stdio.h>

int main(){
	int n;
	printf(">> ");
	scanf("%d", &n);

	// Numb must be with at least 2 digits
	if (n > 9){
		// Total no of digits. Used to get the fisrt digit
		int count = 0;
		int m = n;
		while (m != 0){
			m /= 10;
			count++;
		}

		// Get the pow of 10 for first digit
		int f = 1;
		while (count - 1 != 0){
			count--;
			f *= 10;
		}

		printf("%s\n", n / f == n % 10 ? "true" : "false");
	} else{
		printf("Invalid.\n");
	}

	return 0;
}

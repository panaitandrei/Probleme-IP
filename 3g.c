// Verificati daca un numar natural contine doar cifre binare (0 sau 1).

#include <stdio.h>

int main(){
	// input number
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	int err = 0;
	
	while (n != 0){
		if ((n % 10) == 1 || (n % 10) == 0){
			n /= 10;
		} else{
			err = 1;
			break;
		}
	}
	
	if (err == 0){
		printf("Number contains only binary digits\n");
	}else{
		printf("Number does NOT contain only binary digits\n");
	}
	
	return 0;
}
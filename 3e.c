// Verificati daca un numar natural are toate cifrele pare.

#include <stdio.h>

int main(){
	// input number
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	int count = 0;
	int evens = 0;
	
	// check every digit 
	while (n != 0){
		++count;
		
		// if the last digit is even increment evens
		if (n % 10 % 2 == 0){
			++evens;
		}
		
		n /= 10;
	}
	
	// get the result
	if (count == evens){
		printf("All digist are evens\n");
	} else{
		printf("Not all digist are even\n");
	}
	
	return 0;
}
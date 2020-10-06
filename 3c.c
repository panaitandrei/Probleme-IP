// Determinati media aritmetica a cifrelor pare ale unui numar natural.

#include <stdio.h>

int main(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	int sum = 0;
	int count = 0;
	
	while (n != 0){
		printf("%d\n", n);
		
		if ((n % 10) % 2 == 0){
			sum += n % 10;
			++count;
		}
		n /= 10;
	}
	
	printf("Sum of even digits: %d\n", sum);
	printf("No of even digits: %d\n", count);
	
	printf("Arithmetic mean of even numbers: %d\n", sum / count);
	
	return 0;
}
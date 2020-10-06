// Determinati cifra minima a unui numar natural
 
#include <stdio.h>

int main(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	int min = n % 10;
	
	while (n != 0){
		if (n % 10 < min){
			min = n % 10;
		}
		n /= 10;
	}
	
	printf("Min: %d\n", min);
	return 0;
}
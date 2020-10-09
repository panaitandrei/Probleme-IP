// Determinati numarul divizorilor proprii ai unui numar natural citit.

#include <stdio.h>

int main(){
	int n, i, count = 1;
	printf(">> ");
	scanf("%d", &n);
	
	for(i = 2; i < n / 2; ++i){
		if (n % i == 0){
			++count;
		}
	}
	
	printf("R: %d\n", count);
	
	return 0;
}
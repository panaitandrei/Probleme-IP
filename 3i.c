// Se citeşte un număr natural nr. Determinati dacă prima cifră a numărului este pară sau nu.

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
		m /= 10;
		++count;
	}
	
	// power of 10 for first digit
	int pow = 1;
	while (count-1 != 0){
		--count;
		pow *= 10;
	}
	
	if ((n / pow) % 2 == 0){
		printf("%d is even\n", n / pow);
	}else{
		printf("%d is odd\n", n / pow);
	}
	
	return 0;
}
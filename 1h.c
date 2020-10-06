// Max/min dintre 3 nr

#include <stdio.h>

int main(){
	int a = 22;
	int b = 4;
	int c = 33;
	
	printf("a=%d; b=%d; c=%d\n", a, b, c);
	
	// Find the Max
	if (a > b)
		if (a > c)
			printf("Max: %d\n", a);
		else
			printf("Max: %d\n", c);
	else
		if (b > c)
			printf("Max: %d\n", b);
		else
			printf("Max: %d\n", c);
	
	// Find the Min
	if (a < b)
		if (a < c)
			printf("Min: %d\n", a);
		else
			printf("Min: %d\n", c);
	else
		if (b < c)
			printf("Min: %d\n", b);
		else
			printf("Min: %d\n", c);
			
	return 0;
}
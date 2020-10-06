// Max/min dintre a si b

#include <stdio.h>

int main(){
	int a,b;
	a = 103;
	b = 22;
	
	if (a<b)
		printf("Min: %d\nMax: %d\n", a, b);
	else
		printf("Min: %d\nMax: %d\n", b, a);
	
	return 0;
}
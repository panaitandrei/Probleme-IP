/* Se dă un număr natural n. Se cere să se calculeze n! = 1 * 2 * 3 * … * n. 
 * Exemplu n = 5 rezultatul este 120 = 1 * 2 * 3 * 4 * 5. */

#include <stdio.h>

int main(){
	int n, i, fact = 1;
	printf(">> ");
	scanf("%d", &n);
	
	for (i = 2; i <= n; ++i){
		fact *= i;
	}
	
	printf("R: %d\n", fact);
	
	return 0;
}
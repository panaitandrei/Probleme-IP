// Se dă un număr natural n. Sa se verifice daca numarul este prim.

#include <stdio.h>

int main(){
	int n, i, k = 0;
	printf(">> ");
	scanf("%d", &n);

	for (i = 2; i <= n / 2; i++){
		if (n % i == 0){
			k = 1;
			break;
		}
	}

	if (n == 1 || n == 2){
		printf("%d is a prime number\n", n);
	}else{
		if (k == 0){
			printf("%d is a prime number\n", n);
		}else{
			printf("%d is not a prime number\n", n);
		}
	}
	return 0;
}

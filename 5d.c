// Fie doua numere naturale. Determinati care are suma divizorilor mai mare;

#include <stdio.h>

int sum_com_div(int num);

int main(){
	int n, m, sum;
	
	printf(">> ");
	scanf("%d", &n);
	
	sum = sum_com_div(n);
	
	printf("%d\n", sum);
	return 0;
}

int sum_com_div(int num){
	int i, sum;
	for(i = 1; i <= num / 2; ++i){
		if(num % i == 0){
			sum += i;
		}
	}
	sum += num;
	
	return(sum);
}
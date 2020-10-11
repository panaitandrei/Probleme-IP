// Fie doua numere naturale. Determinati care are suma divizorilor mai mare;

#include <stdio.h>

int sum_com_div(int num);

int main(){
	int n, m, sum_1, sum_2;

	printf("Nr 1 >> ");
	scanf("%d", &n);

	printf("Nr 2 >> ");
	scanf("%d", &m);

	sum_1 = sum_com_div(n);
	sum_2 = sum_com_div(m);

	if (sum_1 == sum_2){
		printf("Ambele numere %d si %d au suma divizorilor egala (%d)\n", n, m, sum_1);
	}else if(sum_1 > sum_2){
		printf("Nr %d are suma divizorilor (%d) mai mare\n", n, sum_1);
	}else{
		printf("Nr %d are suma divizorilor (%d) mai mare\n", m, sum_2);
	}
	
	return 0;
}

int sum_com_div(int num){
	int i, sum=0;
	for(i = 1; i <= num / 2; i++){
		if(num % i == 0){
			sum += i;
		}
	}
	sum += num;

	return(sum);
}

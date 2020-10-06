// Fie doua numere naturale. Determinati care dintre ele are mai multe cifre.

#include <stdio.h>

int main(){
	// Insert numbers (N and M) from keyboard
	int n, m;
	
	printf("N = ");
	scanf("%d", &n);
	
	printf("M = ");
	scanf("%d", &m);
	
	// Make a copy of the numbers for final printing purpose 
	int init_n = n;
	int init_m = m;
	
	// Get total digits of first number (n)
	int count_n = 0;
	
	while (n != 0){
		n /= 10;
		++count_n;
	}
	
	printf("N's total digits: %d\n", count_n);
	
	// Get total digits of second number (m)
	int count_m = 0;
	
	while (m != 0){
		m /= 10;
		++count_m;
	}
	
	printf("M's total digits: %d\n", count_n);
	
	// Print the number with more digits
	if (count_n == count_m){
		printf("Both numbers have the same number of digits\n");
	} else if (count_n > count_m){
		printf("%d has more digits than %d\n", init_n, init_m);
	} else{
		printf("%d has more digits than %d\n", init_m, init_n);		
	}
	
	return 0;
}
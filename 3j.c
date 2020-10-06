/* Se citeşte un număr natural nr. 
 * Determinati cate cifre din nr. sunt mai mici decat prima cifră a numărului */
 
 #include <stdio.h>

int main(){
	// input number
	int n;
	printf(">> ");
	scanf("%d", &n);
	
	// count the digits
	int m = n;
	int cd = 0;
	while (m != 0){
		m /= 10;
		++cd;
	}
	
	// power of 10 for first digit
	int pow = 1;
	while (cd-1 != 0){
		--cd;
		pow *= 10;
	}	
	
	int first_digit = n / pow;
	int count = 0;
	
	while (n != 0){
		if (n % 10 < first_digit){
			++count;
		}
		n /= 10;
	}
	
	printf("%d digits are less than the first digit\n", count);
	
	return 0;
}
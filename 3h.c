/* Se citeşte un număr natural n şi o cifră c.
 * Determinati de câte ori apare cifra c în numărul n.
 * Exemplu n = 33123 c = 3 rezultatul este 3 */

#include <stdio.h>

int main(){
	// input number
	int n;
	printf("n= ");
	scanf("%d", &n);

	// input digit
	int c;
	printf("c= ");
	scanf("%d", &c);

	// check digit
	if (c > 9){
		printf("Invalid `c` digit\n");
	}else{
		int count = 0;
		while (n != 0){
			if (n % 10 == c){
				count++;
			}

			n /= 10;
		}
		printf("%d\n", count);
	}

	return 0;
}

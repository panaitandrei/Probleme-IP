/* Într-un brad sunt a globuri albe, de două ori mai multe globuri roșii și globuri 
verzi cu 3 mai puține ca numărul de globuri roșii. 
Câte globuri sunt în total ? */

#include <stdio.h>

int main(){
	int a, r, v;
	
	printf("Introduceti nr globuri albe: ");
	scanf("%d", &a);
	
	printf("Total globuri albe: %d\n", a);
	
	r = 2*a;
	printf("Total globuri rosii: %d\n", r);
	
	v = r - 3;
	printf("Total globuri verzi: %d\n", v);

	printf("Total globuri: %d\n", a+r+v);
	
	return 0;
}
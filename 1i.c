// Într-o curte sunt G găini și O oi. Să se determine numărul de capete și numărul de picioare din curte.

#include <stdio.h>

int main(){
	int g, o;
	
	printf("Numar gaini: ");
	scanf("%d", &g);
	
	printf("Numar oi: ");
	scanf("%d", &o);

	printf("Nr capete: %d\n", g+o);
	printf("Nr picioare: %d\n", (g*2)+(o*4));
	
	return 0;
}
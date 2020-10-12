/* Se citesc n numere naturale. Sa se detrmine:
a)media aritmetica a numerelor de 3 cifre
b)media aritmetica ca numerelor cu mai putin de 3 cifre
c)media aritmetica a numerelor cu mai mult de 3 cifre */

#include <stdio.h>

int main() {
  int m, i, n;
  printf("How many natural numbers would you like to check: ");
  scanf("%d", &m);
  printf("%d numbers will be checked. Enter numbers below: \n", m);

  int counta=0, countb=0, countc=0, suma=0, sumb=0, sumc=0;

  for(i = 1; i <= m; i++){
    printf("No %d >> ", i);
    scanf("%d", &n);

    if (n >= 100 && n <= 999){
      counta++;
      suma += n;
    }else if (n < 100){
      countb++;
      sumb += n;
    }else{
      countc++;
      sumc += n;
    }
  }

  float mean_a, mean_b, mean_c;

  mean_a = suma / counta;
  mean_b = sumb / countb;
  mean_c = sumc / countc;

  printf("a) Arithmetic mean for numbers >=100 and <=999 is %.2f\n", mean_a);
  printf("b) Arithmetic mean for numbers <100 is %.2f\n", mean_b);
  printf("c) Arithmetic mean for numbers >=1000 is %.2f\n", mean_c);

  return 0;
}

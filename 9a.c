/* Folosind functii (sau nu), cititi un vector de n elemente, afisati vectorul,
inserati valoarea 100, pe pozitia x in vector; afisati noul vector; */

#include <stdio.h>

int main(){
  int x, i;
  printf("Insert position: ");
  scanf("%d", &x);

  int a[100] = {12, 23, 1, 23, 42, 34, 54, 51, 12, 123, 23, 44, 23, 44, 23, 29};

  for (i = 0; i < 100; i++){
    printf("%d ", a[i]);
  }

  return(0);
}

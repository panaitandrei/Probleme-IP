// Cititi elementele unui vector cat timp ele sunt pozitive

#include <stdio.h>

int main() {
  int n, i, elem;
  int a[n];

  printf("Total Elements: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Elem %d: ", i);
    scanf("%d", &elem);
    a[i] = elem;
  }

  for (i = 0; i < n; i++){
    if (a[i] > 0){
      printf("%d\n", a[i]);
    }
  }

  return 0;
}

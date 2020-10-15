// Afisati cifrele dintr-un vector de n caractere

#include <stdio.h>

int main() {
  char s[1000], d[1000];
  int i, counts=0, countd=0;

  printf("Insert a string: ");
  scanf("%s", s);

  while (s[counts] != '\0') {
    counts++;
  }

  printf("Str len: %d\n", counts);

  for (i = 0; i < counts; i++){
    if (s[i] >= '0' && s[i] <= '9'){
      d[countd] = s[i];
      countd++;
    }
  }

  printf("All digits: %s\n", d);
  return 0;
}

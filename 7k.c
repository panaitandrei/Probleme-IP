// Afisati literele mari dintr-un vector de n caractere

#include <stdio.h>

int main() {
  char s[1000];
  int i, count=0;

  printf("Insert a string: ");
  scanf("%s", s);

  while (s[count] != '\0') {
    count++;
  }

  printf("Str len: %d\n", count);

  for (i = 0; i < count; i++){
    if (s[i] >= 'A' && s[i] <= 'Z'){
      printf("%c\n", s[i]);
    }
  }

  return 0;
}

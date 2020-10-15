// Afisati vocalele dintr-un sir de n caractere

#include <stdio.h>

int vowel_check(char ch);

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
    if (vowel_check(s[i])){
      printf("%c\n", s[i]);
    }
  }

  return 0;
}

int vowel_check(char ch){
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    return(1);
  }

  if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    return(1);
  }

  return(0);
}

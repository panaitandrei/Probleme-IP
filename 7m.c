// Afisati consoanele dintr-un sir de n caractere

#include <stdio.h>

int consonant_check(char ch);

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
    if (consonant_check(s[i])){
      printf("%c\n", s[i]);
    }
  }

  return 0;
}

int consonant_check(char ch){
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    return(0);
  }else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
    return(1);
  }

  return(0);
}

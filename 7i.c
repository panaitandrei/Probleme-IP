// Afisati in ordine inversa caracterele dintr-un vector de caractere

#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];

    printf("Enter a string: ");
    scanf("%s", s);

    char new_s = strrev(s);

    printf(">> %s\n", new_s);

    return(0);
}

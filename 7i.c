// Afisati in ordine inversa caracterele dintr-un vector de caractere

#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000], r[1000];
    int start, end, count=0;

    printf("Enter a string: ");
    scanf("%s", s);

    while (s[count] != '\0') {
      count++;
    }

    end = count - 1;

    for (start = 0; start < count; start++) {
        r[start] = s[end];
        end--;
    }

    r[start] = '\0';

    printf(">> %s\n", r);

    return(0);
}

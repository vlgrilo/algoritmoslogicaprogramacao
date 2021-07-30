#include <stdio.h>

int main ()
{
    char palavra[40];
    int s;
    printf("Digite uma palavra: ");
    gets(palavra);
    s  = strlen(palavra);
    printf("\nA palavra digitada tem %i caracteres", s);
    return(0);
}

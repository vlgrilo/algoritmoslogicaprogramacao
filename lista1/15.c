#include <stdio.h>
#include <string.h>
int main()
{
    char nome1[50], nome2[50];
    printf("Digite o primeiro nome: \n");
    gets(nome1);

    printf("Digite o segundo nome: \n");
    gets(nome2);
    printf("\n\nNomes em ordem alfabectica: \n");

    if (strcmp (nome1, nome2) < 0)
    {
        printf("%s\n\n%s\n\n", nome1, nome2);
    }
    else
    {
        printf("%s\n\n%s\n\n", nome2, nome1);
    }
    return(0);
 }

#include <stdio.h>
int main()
{
    char vogais[15];
    int numvogais=0, soma1=0, soma2=0, i;
    for (i=0; i<=14; i++)
    {
        printf("Informe um caracter: ");
        scanf("%c",&vogais[i]);
        fflush(stdin);
        if (vogais[i]=='a' || vogais[i]=='e' || vogais[i]=='i' || vogais[i]=='o' || vogais[i]=='u')
        {
            soma1 = soma1 + 1;
        }
        if (vogais[i]=='A' || vogais[i]=='E' || vogais[i]=='I' || vogais[i]=='O' || vogais[i]=='U')
        {
            soma2 = soma2 + 1;
        }
    }
    numvogais = soma1 + soma2;
    printf("\nNumero de vogais: %i",numvogais);
    return(0);
}

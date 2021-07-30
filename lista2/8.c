#include<stdio.h>
int main()
{
    int nun, maior = 0, menor = 1000000, i;
    printf("Informe 10 numeros:\n");
    for (i=1; i<=10; i++ )
    {
        scanf("%i",&nun);
    if (nun > maior)
    {
        maior = nun;
    }
    if (nun < menor)
    {
        menor = nun;
    }
    }
    printf("\nMaior numero: %i" ,maior);
    printf("\nMenor numero: %i" ,menor);
    return(0);
}

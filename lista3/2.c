#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i;
    for (i=0;i<=9;i++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%i",&vetor[i]);
        fflush(stdin);
    }
    printf("\n");
    for (i=9;i>=0;i--)
    {
        printf("%i ", vetor[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int vetor[20], i, par=0, impar=0;
    for(i=0;i<=19;i++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%i",&vetor[i]);
        fflush(stdin);
        if (vetor[i]%2==0)
		{
			par = par + 1;
		}
		if (vetor[i]%2>0)
        {
            impar = impar + 1;
        }
    }
    printf("\n");
    for(i=0;i<=19;i++)
    {
        printf("%i ",vetor[i]);
    }
    printf("\n");
    printf("\nQuantidade de numeros pares: %i",par);
    printf("\nQuantidade de numeros impares: %i",impar);
    return (0);
}

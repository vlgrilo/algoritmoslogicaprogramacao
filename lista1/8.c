#include<stdio.h>
int main()
{
    int nun[10], i, impar=0;

    for(i=0;i<=9;i++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%i",&nun[i]);
        fflush(stdin);
        if (nun[i]%2>0)
		{
			impar = impar + nun[i];
		}
    }
    printf("\nSoma dos numeros impares: %i",impar);
    return (0);
}


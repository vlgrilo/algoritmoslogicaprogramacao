#include<stdio.h>
int main()
{
    int nun[10], i, par=0;

    for(i=0;i<=9;i++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%i",&nun[i]);
        fflush(stdin);
        if (nun[i]%2==0)
		{
			par = par + nun[i];
		}
    }
    printf("\nSoma dos numeros pares: %i",par);
    return (0);
}

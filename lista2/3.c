#include<stdio.h>
int main ()

{
    int n1, i, par=0, impar=0;
    printf("Entre com um intervalo de numero: ");
    scanf("%i",&n1);
    for(i=1; i<=n1; i++)
    if(i%2==0)
    {
        par+=1;
    }
    else
    {
        impar+=1;
    }
    printf("\nQuantidade de numeros pares: %i\n",par);
    printf("\nQuantidade de numeros impares: %i\n",impar);
    return (0);
}

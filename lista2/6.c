#include<stdio.h>
int main ()

{
    int i, res, nun, soma=0;
    printf("Intervalo de numeros: ");
    scanf("%i",&nun);
    printf("Quadrado dos numeros ate: %i\n",nun);
    for(i=1; i<=nun; i++)
    {
        res = i * i;
        soma+= res;
        printf("%i = %i\n", i, res);
    }
    printf("soma dos quadrados: %i",soma);
    return (0);
}

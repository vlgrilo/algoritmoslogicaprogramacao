#include<stdio.h>
int main ()

{
    int nun, i, res, res2;
    printf("Entre com um intervalo de numeros: ");
    scanf("%i",&nun);
    for(i=1; i<=nun-3; i++)
    {
        res = i;
        res2 = i + 3;
        printf("%i ", res);
        printf("%i ", res2);
        printf("%i ", res2);
    }
    return (0);
}

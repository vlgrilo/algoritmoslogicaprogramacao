#include<stdio.h>
int main ()

{
    int n1,i;
    printf("Entre com um intervalos de numero: ");
    scanf("%i",&n1);
    printf("\nMultiplo de 3 e 5\n");
    for(i=1; i<=n1; i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%i ",i);
        }
    }
    printf("\n\nMultiplo de 3 ou 5\n");
    for(i=1; i<=n1; i++)
    {
        if(i%3==0 || i%5==0)
        {
            printf("%i ",i);
        }
    }
    return (0);
}

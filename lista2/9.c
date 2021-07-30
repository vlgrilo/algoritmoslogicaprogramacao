#include<stdio.h>
int main()
{
    int nun, i, maior=0;
    for( i = 1; i <= 20; i++ )
    {
        printf("Entre com um numero: ");
        scanf("%i",&nun);
      if (nun > 50)
        {
            maior = maior + 1;
        }
    }
    printf("Maiores que 50: %i",maior);
    return(0);
}

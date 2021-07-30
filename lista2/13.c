#include <stdio.h>

int main()
{
    int n=0, num=0, i, controle=0, primos=0;

    printf("\nInforme 10 numeros inteiros.\n\n");

    do{
        printf("Informe o Numero: ");
        scanf("%i", &num);
        if (num <= 0) return 0;

        for (i = 1; i <= num; i++)
        {
            if (num%i==0)
            {
                controle++;
            }
        }
        if (controle <= 2)
        {
            primos++;
            controle=0;
        } else {
            controle=0;
        }
        n++;
    }while(n <= 9);

    primos -= 1;
    printf("\n\nQuantidade de primos: %i \n", primos);

    return 0;
}

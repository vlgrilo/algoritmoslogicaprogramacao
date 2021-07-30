#include <stdio.h>

int main()
{
    int n=0, num=0, i, controle=0;

    printf("\nInforme 10 numeros inteiros.\n\n");
    do{
        printf("Informe o Numero: ");
        scanf("%i", &num);

        if(num > 1) {
            for (i = 1; i <= num; i++)
            {
                if (num%i==0)
                {
                    controle++;
                }
            }
            if (controle <= 2)
            {
                printf("%d e primo\n", num);
                controle=0;
            } else {
            printf("%d nao e primo\n", num);
            controle=0;
            }
            n++;
        }
    }while(n <= 9);

    return 0;
}

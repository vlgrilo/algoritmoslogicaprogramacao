#include <stdio.h>
int main()
{
    int x, y, total=1;
    int matriz[5][5];
    printf("Insira os numeros:\n");
    for(x=0; x<5; x++)
    {
        for(y=0; y<5; y++)
        {
            scanf("%i",&matriz[x][y]);
             if (x == y)
            {
                total = matriz[x][y] * total;
            }
        }
    }
    printf("\nMatriz Informada:\n");
    for (x=0;x<5;x++)
    {
        for (y=0;y<5;y++)
        {
            printf(" %d ",matriz[x][y]);
        }
        printf("\n");

    }
    printf("\nMultiplicacao da diagonal: %i", total);
    return(0);
}

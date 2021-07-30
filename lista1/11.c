#include <stdio.h>
int main ()
{
    int x, y, menor=1000000, posx, posy;;
    int matriz[2][2];
    printf("Insira os numeros:\n");
    for(x=0; x<2; x++)
    {
        for(y=0; y<2; y++)
        {
            scanf("%i",&matriz[x][y]);
        }
    }
    printf("\nMatriz Informada:\n");
    for (x=0;x<2;x++)
    {
        for (y=0;y<2;y++)
        {
            printf(" %d ",matriz[x][y]);
            if (matriz[x][y] < menor)
            {
                menor = matriz[x][y];
                posx = x +1;
                posy = y +1;
            }
        }
        printf("\n");

    }
    printf("\nMenor numero: %i",menor);
    printf("\n%i Linha - %i Coluna", posx, posy);
    return(0);
}

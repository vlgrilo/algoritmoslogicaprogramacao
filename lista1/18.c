#include <stdio.h>
int main ()
{
    int x, y;
    int matriz[3][3];
    printf("Insira os numeros:\n");
    for(x=0; x<3; x++)
    {
        for(y=0; y<3; y++)
        {
            scanf("%i",&matriz[x][y]);
            if (matriz[x][y] < 0)
            {
                matriz[x][y] = 0;
            }
        }
    }
    printf("\nMatriz Informada:\n");
    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            printf(" %d ",matriz[x][y]);
        }
        printf("\n");

    }
    return(0);
}

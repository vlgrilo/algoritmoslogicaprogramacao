#include<stdio.h>
int main()
{
    int m1[3][3], m2[3][3] , m3[3][3] , i, j;
    printf("*Entrada de dados para a matriz 1*\n\n");
    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            printf("Informe numero para 1 matriz: ");
            scanf("%i",&m1[i][j]);
            fflush(stdin);
        }
    }
    printf("\n*Entrada de dados para a matriz 2*\n\n");
    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            printf("Informe numero para 2 matriz: ");
            scanf("%i",&m2[i][j]);
            fflush(stdin);
        }
    }
    printf("\nMatriz 1\n");
    for(i=0;i<=2;++i)
    {
        for(j=0;j<=2;++j)
        {
            printf("%i ",m1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2\n");
    for(i=0;i<=2;++i)
    {
        for(j=0;j<=2;++j)
        {
            printf("%i ",m2[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 3\n");
    for(i=0;i<=2;++i)
    {
        for(j=0;j<=2;++j)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
            printf("%i ",m3[i][j]);
        }
        printf("\n");
    }
    return(0);
}


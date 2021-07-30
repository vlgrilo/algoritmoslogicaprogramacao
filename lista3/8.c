#include<stdio.h>
int main()
{
    int nun[10], i, j, x;
    for (i=0; i<=9; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%i",&nun[i]);
    }
    for (i=0; i<=8; i++)
    {
        for (j=i+1; j<=9; j++)
        {
            if(nun[i] > nun[j])
            {
                x = nun[i];
                nun[i] = nun[j];
                nun[j] = x;
            }
        }
    }
    printf("\n");
    for (i=9; i>=0; i--)
    {
        printf("%i ",nun[i]);
    }
    return(0);
}

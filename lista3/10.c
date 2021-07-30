#include<stdio.h>

int main()
{
    int i;
    float alt[20], maior=0, menor=1000000;
    for(i=0;i<=19;i++)
    {
        printf("Informe a altura: ");
        scanf("%f",&alt[i]);
        fflush(stdin);
        if (alt[i] > maior)
        {
            maior = alt[i];
        }
        if (alt[i] < menor)
        {
            menor = alt[i];
        }
    }
    printf("\nMaior altura: %.2f" ,maior);
    printf("\nMenor altura: %.2f" ,menor);
    return (0);
}

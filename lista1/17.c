#include<stdio.h>

struct pessoa
{
    char nome[50];
    int idade, peso;
    float altura;
};
int main()
{
    struct pessoa p[3];
    int i;
    for(i=0; i<=2; i++)
    {
        printf("Digite o nome da %i pessoa: ",i+1);
        gets(p[i].nome);
        printf("Digite a idade da %i pessoa: ",i+1);
        scanf("%i",&p[i].idade);
        printf("Digite o peso da %i pessoa: ",i+1);
        scanf("%i",&p[i].peso);
        printf("Digite a altura da %i pessoa: ",i+1);
        scanf("%f",&p[i].altura);
        printf("\n");
        fflush(stdin);
    }
    printf("NOME * IDADE * PESO * ALTURA");
    for(i=0; i<=2; i++)
    {
        printf("\n%s - %i - %i - %.2f", p[i].nome, p[i].idade, p[i].peso, p[i].altura);
    }
    return (0);
}

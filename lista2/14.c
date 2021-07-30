#include<stdio.h>
struct residencial
{
    int num, quant, cons;
    float total, soma, media;
};
struct comercial
{
    int num, quant, cons;
    float total, soma, media;
};
struct industrial
{
    int num, quant, cons;
    float total;
};
int main()
{
    int quanttotal, tipo, casa=0, loja=0;
    struct residencial r;
    struct comercial c;
    struct industrial in;
    r.soma = 0; c.soma = 0; r.cons = 0; c.cons = 0; in.cons = 0; r.media = 0; c.media = 0;
    while(tipo > 0)
    {
    printf("Tipo de consumidor:\n1 - Residencial\n2 - Comercial\n3 - Industrial\n0 - Sair\n");
    printf("Informe o tipo de consumidor: ");
    scanf("%i",&tipo);
    switch (tipo)
    {
    case 1: // RESIDENCIAL
        {
            casa = casa + 1;
            printf("\n#RESIDENCIAL#");
            printf("\nInforme o numero: ");
            scanf("%i",&r.num);
            printf("Informe a quantidade consumida: ");
            scanf("%i",&r.quant);
            r.cons = r.quant + r.cons;
            r.total = r.quant * 0.3;
            printf("Total do consumidor: %.2f\n\n", r.total);
            r.soma = r.soma + r.total;
            r.media = r.soma/casa;
            break;
        }
    case 2: // COMERCIAL
        {
            loja = loja + 1;
            printf("\n#COMERCIAL#");
            printf("\nInforme o numero: ");
            scanf("%i",&c.num);
            printf("Informe a quantidade consumida: ");
            scanf("%i",&c.quant);
            c.cons = c.quant + c.cons;
            c.total = c.quant * 0.5;
            printf("Total do consumidor: %.2f\n\n", c.total);
            c.soma = c.soma + c.total;
            c.media = c.soma/loja;
            break;
        }
    case 3: // INDUSTRIAL
        {
            printf("\n#INDUSTRIAL#");
            printf("\nInforme o numero: ");
            scanf("%i",&in.num);
            printf("Informe a quantidade consumida: ");
            scanf("%i",&in.quant);
            in.cons = in.quant + in.cons;
            in.total = in.quant * 0.7;
            printf("Total do consumidor: %.2f\n\n", in.total);
            break;
        }
    }
    }
    quanttotal = r.cons + c.cons + in.cons;
    printf("\nTotal consumido kWh: %i", quanttotal);
    printf("\nMedia residencial %.2f", r.media);
    printf("\nMedia comercial %.2f", c.media);
    return(0);
}

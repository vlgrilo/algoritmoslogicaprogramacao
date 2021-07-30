#include<stdio.h>
int main()
{
    float joao = 1.10, jose = 1.50;
    int anos = 0;
    do
    {
        jose = jose + 0.02;
        joao = joao + 0.03;
        anos = anos + 1;
    }while (jose > joao);
    printf("%i Anos", anos);
    printf("\nAltura do jose em %i anos: %.2f", anos, jose);
    printf("\nAltura do joao em %i anos: %.2f", anos, joao);
    return(0);
}

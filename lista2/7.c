#include<stdio.h>
int main()
{
  int nun, i, res, soma;

  for( i = 1; i <= 10; i++ )
    {
    printf("Digite um numero: ");
    scanf("%i",&nun);
    soma = nun * nun * nun;
    res = soma;
    printf("%i X %i x %i = %i \n" , nun, nun, nun, res);
    }

  return 0;

}

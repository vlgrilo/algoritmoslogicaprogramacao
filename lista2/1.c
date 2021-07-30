#include <stdio.h>
int main()
{
	int i, nun, par=0;
	printf("Entre com intervalo de numeros: ");
    scanf("%i", &nun);
	for(i=1;i<=nun;i++)
	{
		if (i%2==0)
		{
		    printf("%i\n",i);
			par = par + i;
        }

	}
	printf("Soma dos numeros pares entre 1 e %i: %i", nun, par);
	return 0;
}

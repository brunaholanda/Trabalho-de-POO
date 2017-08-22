#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int numInteiro, i, divInteiro, binario[50], cont=0;
	
	printf("Informe um numero inteiro.\n");
	scanf("%d", &numInteiro);
	
	for (i = 0; i < 50; i ++)
	{
		if ((numInteiro%2) != 0)
		{
			numInteiro = (numInteiro - 1)/2;
			binario[i] = 1;
			cont++;
		}else
		{
			numInteiro = (numInteiro/2);
			binario[i] = 0;
			cont++;
		}
	}
	
	for (i = 0; i < cont; i++)
	{
		printf("[%d]", binario[i]);
	}
	
	return 0;
}

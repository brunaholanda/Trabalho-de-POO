#include <stdio.h>
#include<stdlib.h>

int main ()
{
	int A, B, i, maior, menor;
	
	printf("Informe dois numero inteiros.\n");
	scanf("%d", &A);
	scanf("%d", &B);
	
	if (A > B)
	{
		maior = A;
	}
	else{
		maior = B;
	}
	
	if (A < B)
	{
		menor = A;
	}
	else{
		menor = B;
	}
	
	for (i = menor; i < maior; i++)
	{
		if (i%2 != 0)
		{
			printf("Impar: %d\n", i);
		}
	}
	
	return 0;
}

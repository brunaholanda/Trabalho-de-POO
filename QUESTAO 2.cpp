#include <stdio.h>
#include<stdlib.h>

int main()
{
	int salario, i, k, salarioFinal, acrescimo, somaSalario = 0, somaReajustados = 0;
	char nome[100];
	
	
	do
	{
		printf("\n\nInforme o nome do funcionario\n");
		
		scanf("%s", nome);
			
		printf("Informe o salario do funcionario.\n");
		scanf("%d", &salario);
		
		somaSalario = (somaSalario + salario);
	
		if (salario <= 150)
		{
			acrescimo = (salario*25)/100;
			salarioFinal = (salario+acrescimo);
		}
		else if (salario > 150 && salario <= 300)
		{
			acrescimo = (salario*20)/100;
			salarioFinal = (salario+acrescimo);
		}
		else if (salario > 300 && salario <= 600)
		{
			acrescimo = (salario*15)/100;
			salarioFinal = (salario+acrescimo);
		}
		else if (salario > 600)
		{
			acrescimo = (salario*10)/100;
			salarioFinal = (salario+acrescimo);
		}
		
	printf("Funcionario: ");
	for (i = 0; i < 20; i++)
	{
		printf("%c", nome[i]);
	}
	
	printf("\n\n");
		
		printf("Salario atual: %d", salario);
		printf("\n");
		printf("Acrescimo: %d", acrescimo);
		printf("\n");
		printf("Salario final: %d", salarioFinal);
		printf("\n\n\n");
		
		somaReajustados = (somaReajustados + salarioFinal);
		
		printf("Digite 1 para sair.\nQualquer outro numero para continuar \n");
		scanf("%d", &k);
	}while(k != 1);
	
	
	printf("Soma reajustados: %d", somaReajustados);
	printf("\n");
	
	return 0;
}

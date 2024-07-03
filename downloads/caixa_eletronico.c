
/*
 * Simulador de caixa eletronico em C
 *
 * Recebe o valor de um saque e mostra quantas notas de 
 * cada valor serao entregues.
 *
 * Notas aceitas: 2, 5, 10, 20, 50, 100
 *
 * Angelito M. Goulart
 * www.angelitomg.com
 *
 * 07/12/2012
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	// Declaracao das variaveis
	int notas_2 = 0, notas_5 = 0, notas_10 = 0, notas_20 = 0, notas_50 = 0, notas_100 = 0, valor = 0, valor_sacado = 0;

	// Recebe o valor do saque
	printf("Digite o valor a ser sacado (multiplo de 2): ");
	scanf("%d", &valor);
	valor_sacado = valor;

	// Verifica se e multiplo de 2
	if (valor % 2 != 0)
	{
		printf("O valor deve ser multiplo de 2.");
		exit(1);
	}
	
	// Verifica as notas de 100
	while (valor >= 100)
	{
		valor = valor - 100;
		notas_100++;
	}

	// Verifica as notas de 50
	while (valor >= 50)
	{
		valor = valor - 50;
		notas_50++;
	}

	// Verifica as notas de 20
	while (valor >= 20)
	{
		valor = valor - 20;
		notas_20++;
	}

	// Verifica as notas de 10
	while (valor >= 10)
	{
		valor = valor - 10;
		notas_10++;
	}

	// Verifica as notas de 5. Verifica tambem se o resto que sobrou
	// e divisivel por 2, ja que nao temos notas de 1
	while (valor >= 5 && (valor - 5 % 2 == 0))
	{
		valor = valor - 5;
		notas_5++;
	}
	
	// Verifica as notas de 2
	while (valor >= 2)
	{
		valor = valor - 2;
		notas_2++;
	}

	// Exibe o resultado
	printf("\n\nValor sacado: %d\n", valor_sacado);
	printf("Notas de 100: %d\n", notas_100);
	printf("Notas de 50: %d\n", notas_50);
	printf("Notas de 20: %d\n", notas_20);
	printf("Notas de 10: %d\n", notas_10);
	printf("Notas de 5: %d\n", notas_5);
	printf("Notas de 2: %d\n", notas_2);

	return 0;	

}

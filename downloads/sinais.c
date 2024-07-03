
/**
 *
 * sinais.c
 *
 * Exemplo do uso de sinais em sistemas *nix.
 *
 * Angelito M. Goulart
 * www.angelitomg.com
 *
 * 27/12/2012
 *
 */

// Inclusao das bibliotecas necessarias
#include <stdio.h>
#include <signal.h>

// Funcao aloMundo, que sera chamada quando o programa receber o sinal 2
void aloMundo(int sinal)
{
	printf("\nAlo Mundo!\n");
}


// Funcao main
int main()
{
	
	// Tratamento do sinal 2. Assim, quando o programa receber o sinal 2
	// (CTRL+C), ira executar a funcao aloMundo
	signal(2, aloMundo);

	// Exibicao do PID do programa
	printf("PID: %i\n", getpid());

	// Loop infinito para que o programa fique sempre em execucao
	while(1)
	{

		// Exibe a mensagem
		printf("Programa em execucao...\n");
	
		// Aguarda 5 segundos
		sleep(5);

	}

	// Retorno da funcao main
	return 0;

}

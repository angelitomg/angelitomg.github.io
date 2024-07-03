/*
* Acendedor de leds pela porta paralela
* Angelito M. Goulart
* Setembro/2009
*
* Esquema Eletrico
*
* Pino2 -> 470R -> LED1
* Pino3 -> 470R -> LED2
*
* Pode-se usar do pino 2 ate o pino 9 para ligar os LEDs
* GND -> Do pino 18 ao pino 25
*
*/

#include <stdio.h>
#include <sys/io.h>
int main(void)
{
	int opcao;
	ioperm(0x378,3,1); //inicializa a porta paralela
	outb(0x00, 0x378);
	do
 	{
	    printf ("\n=====Acendedor de Leds=====\n");
	    printf (" 1.Acender Leds\n");
	    printf (" 2.Apagar Leds\n");
 	    printf (" 3.Sair\n\n");
	    printf (" Selecione uma opcao: ");
	    scanf ("%d", &opcao);
	    if (opcao == 1)
	    {
		outb(0xFF, 0x378); //caso a opcao seja 1, acende todos os leds
	    }
	    if (opcao == 2)
 	    {
		outb(0x00, 0x378); //caso a opcao seja 2, apaga todos os leds
 	    }
	}while (opcao != 3);
	outb(0x00, 0x378);
	return (0);
}


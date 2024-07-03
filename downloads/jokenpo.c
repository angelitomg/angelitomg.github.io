/*
* JokenPo
*
* Angelito M. Goulart
*
* Setembro/2009
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pontos_jogador=0, pontos_cpu=0;
main()
{
    jokenpo();
}
int jokenpo()
{
    int jogador, cpu;
    printf ("---JokenPo---\n");
    printf ("%d Jogador X CPU %d\n", pontos_jogador, pontos_cpu);
    printf ("-------------\n");
    printf ("0. Pedra\n");
    printf ("1. Papel\n");
    printf ("2. Tesoura\n");
    printf ("3. Sair\n");
    scanf ("%d", &jogador);
    if (jogador < 0 || jogador >=3)
    {
        exit(0);
    }
    srand(time(NULL));
    cpu = rand() % 3; //gera um numero aleatorio
    switch(cpu)
    {
        case 0: printf ("CPU -> Pedra\n"); break;
        case 1: printf ("CPU -> Papel\n"); break;
        case 2: printf ("CPU -> Tesoura\n"); break;
    }
    if ((jogador == 0 && cpu==2) || (jogador == 1 && cpu == 0) || (jogador == 2 && cpu == 1)) //verifica se o jogador venceu
        {
            printf("Voce venceu!\n");
            pontos_jogador++;
            jokenpo();
        }
    if (jogador == cpu) //verifica se houve empate
        {
            printf ("Empate!\n");
            jokenpo();
        }
    else
        {
            printf ("CPU venceu!\n");
            pontos_cpu++;
            jokenpo();

        }
        return 0;
}


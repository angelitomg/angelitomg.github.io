/**
*
* @arquivo: copiar_string.c
*
* @descricao: arquivo que demonstra o uso da funcao strcpy da biblioteca
* string.h
*
* @autor: Angelito M. Goulart
*
* @data: 06/06/2012
*
*/

#include <stdio.h>
#include <string.h>

int main()
{
    
    /* Declaracao das strings */
    char str1[30], str2[30];
    
    /**
    * Inicializacao das strings. Note que nao podemos utilizar o operador de 
    * atribuicao para definir um valor para as strings. Devemos COPIAR o valor 
    * desejado para a string de destino.  
    */
    strcpy(str1, "Nome 1");
    strcpy(str2, "Nome 2");
    
    /* Exibicao do valor atual das strings */
    printf("String 1 -> %s | String 2 -> %s\n", str1, str2);
    
    /* Copia do valor de str2 para str1 */
    strcpy(str1, str2);
    
    /* Exibicao dos valores das strings apos a copia */
    printf("String 1 -> %s | String 2 -> %s\n", str1, str2);
    
    return(0);
    
}

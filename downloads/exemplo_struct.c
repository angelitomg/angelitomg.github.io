
/**
 *
 * Exemplo do uso de structs
 *
 * Angelito M. Goulart
 *
 * www.angelitomg.com
 *
 * 18/12/2012
 *
 */

#include <stdio.h>

int main()
{
    
    // Criacao da struct cliente
    struct cliente{
           
       // Dados da estrutura
       int codigo;
       char nome[50];
       char email[100];
       int ativo;
       
    };
    
    // Criacao da variavel cliente1, que ira conter uma estrutura do tipo cliente
    struct cliente cliente1;
    
    // Obtemos os dados do usuario e armazenamos na variavel cliente1
    printf("=========== INFORME OS DADOS DO CLIENTE ===========\n");
    printf("\nDigite o codigo: ");
    scanf("%d", &cliente1.codigo);
    printf("\nDigite o status (0 -> inativo | 1 -> ativo): ");
    scanf("%d", &cliente1.ativo);
    printf("\nDigite o nome: ");
    scanf("%s", &cliente1.nome);
    printf("\nDigite o email: ");
    scanf("%s", &cliente1.email);
    
    // Exibimos os dados da variavel cliente1
    printf("\n=========== EXIBICAO DOS DADOS ===========\n");
    printf("Codigo: %d\n", cliente1.codigo);
    printf("Nome: %s\n", cliente1.nome);
    printf("Email: %s\n", cliente1.email);
    printf("Ativo: %d\n", cliente1.ativo);
    
    // Retorno da funcao
    return 0;   
    
}

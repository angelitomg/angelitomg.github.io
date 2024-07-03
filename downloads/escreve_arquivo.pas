
{ @nome: escreve_arquivo.pas }
{ @descricao: escreve um registro em um arquivo binario }
{ @data: 29/11/2011 }
{ @autor: Angelito M. Goulart }
program escreve_arquivo;

{ Cria um tipo chamado registro }
Type Registro = Record
        Nome: String[30];
        Endereco: String[50];
        Cep: String[9];
        Telefone: String[14];
        end;
Var

        { Cria um ponteiro para um arquivo do tipo Registro }
        Arquivo: File of Registro;

        { Cria uma variavel do tipo registro }
        Pessoa: Registro;

        { Variavel de controle do programa }
        Controle: Integer;

Begin


        { Abre o arquivo dados.bin na variavel Arquivo }
        assign(Arquivo, 'dados.bin');

        { Abre o arquivo para criacao/gravacao }
        rewrite(Arquivo);

        { Loop inicial do programa }
        Repeat

                { Pergunta ao usuario o nome da pessoa }
                writeln('Digite o nome da pessoa: ');

                { Obtem o nome da pessoa }
                readln(Pessoa.Nome);

                { Pergunta ao usuario o endereco }
                writeln('Digite o endereco da pessoa: ');

                { Obtem o endereco }
                readln(Pessoa.Endereco);

                { Pergunta ao usuario o cep }
                writeln('Digite o CEP da pessoa: ');

                { Obtem o cep }
                readln(Pessoa.Cep);

                { Pergunta ao usuario o telefone }
                writeln('Digite o telefone da pessoa: ');

                { Obtem o telefone }
                readln(Pessoa.Telefone);

                { Escreve no arquivo aberto anteriormente, o
                do registro chamado Pessoa }
                write(Arquivo, Pessoa);

                { Pergunta se o usuario quer inserir outro arquivo }
                writeln('Deseja inserir outro registro? (1)SIM (2)Nao');

                { Le a resposta do usuario }
                readln(Controle);

        { Verifica a escolha do usuario }
        Until Controle = 2;

        { Fecha o arquivo }
        close(Arquivo);

End.

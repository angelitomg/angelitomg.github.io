{ @nome: le_arquivo.pas }
{ @descricao: le um arquivo binario de dados }
{ @data: 29/11/2011 }
{ @autor: Angelito M. Goulart }
program le_arquivo;

{ Cria uma estrutura chamada registro }
Type Registro = record
        Nome: String[30];
        Endereco: String[50];
        Cep: String[9];
        Telefone: String[14];
       end;
var

        { Cria uma variavel do tipo Registro }
        Pessoa: Registro;

        { Cria um ponteiro para arquivo do tipo Registro }
        Arquivo: File of Registro;

begin

        { Atribui o arquivo dados.bin a variavel Arquivo }
        assign(Arquivo, 'dados.bin');

        { Abre o arquivo para leitura }
        reset(Arquivo);

        { Escreve uma linha vazia }
        writeln('');

        { Percorre o arquivo }
        while not(eof(Arquivo)) do

        begin

                { Le um registro do arquivo }
                read(Arquivo, Pessoa);

                { Escreve os dados na tela }
                writeln('Nome    : ', Pessoa.Nome);
                writeln('Endereco: ', Pessoa.Endereco);
                writeln('Cep     : ', Pessoa.Cep);
                writeln('Telefone: ', Pessoa.Telefone);
                writeln('--------------------------------------------');

        end;

end.

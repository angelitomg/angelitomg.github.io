program Questionario;

{ Cria uma estrutura chamada entrevistado que vai conter o nome
e um vetor com as respostas }
Type Entrevistado = record
        Nome: String[30];
        Respostas: array[1..10] of integer;
        end;

Var
        { Cria uma variavel do tipo entrevistado }
        Pessoa: Entrevistado;

        { Cria uma variavel para manipular um arquivo com dados
        do tipo Entrevistado}
        Arquivo: File of Entrevistado;

        { Variaveis para controlar a matriz Resultado }
        i, j: Integer;

        { Matriz resultado, que ira conter os resultados }
        Resultado: array[1..10, 1..5] of integer;

Begin

        { Abre o arquivo respostas.bin }
        assign(Arquivo, 'respostas.bin');

        { Define o modo como criacao/gravacao }
        rewrite(Arquivo);

        { Loop principal do programa }
        Repeat

                { Recebe o nome do entrevistado }
                writeln('Digite seu nome: ');
                readln(Pessoa.Nome);

                { Se o nome for vazio, sai do loop }
                if (Pessoa.Nome = '') then
                begin
                   break;
                end;

                { Obtem as 10 respostas }
                for i := 1 to 10 do
                begin
                    writeln('Digite a resposta da questao ', i, ':');
                    readln(Pessoa.Respostas[i]);
                end;

                { Escreve as respostas no arquivo}
                write(Arquivo, Pessoa);

        { Condicao para sair do loop }
        Until Pessoa.Nome = '';

        { Abre o arquivo de respostas para leitura }
        reset(Arquivo);

        { Coloca o cursor no inicio do arquivo }
        seek(Arquivo, 0);


        { Zera a matriz de resultados }
        for i := 1 to 10 do
        begin
            for j := 1 to 5 do
            begin
                Resultado[i, j] := 0;
            end;
        end;

        { Le o arquivo de respostas }
        while not eof(Arquivo) do
        begin

            { Le o registro atual }
            read(Arquivo, Pessoa);
            for i := 1 to 10 do
                begin

                     { Parte principal. Verifica a resposta dada pelo usuario
                     e incrementa o inidice equivalente a resposta da matriz
                     de resultados. Ou seja: mais uma pessoa respondeu ESSA
                     pergunta}
                     Resultado[i, Pessoa.Respostas[i]] := Resultado[i, Pessoa.Respostas[i]] + 1;

                end;
        end;

        { Fecha o arquivo }
        close(Arquivo);

        { Exibe as respostas }
        for i := 1 to 10 do
        begin
            writeln('-- Questao ', i, ': ');
            for j := 1 to 5 do
            begin
                writeln('Opcao ', j, ': ', Resultado[i, j], ' respostas!');
            end;
        end;

End.

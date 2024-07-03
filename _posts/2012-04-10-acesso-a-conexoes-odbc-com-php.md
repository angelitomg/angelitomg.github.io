---
id: 210
title: 'Acesso a conexões ODBC com PHP'
date: '2012-04-10T12:47:28-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=210'
permalink: /acesso-a-conexoes-odbc-com-php/
categories:
    - 'Banco de Dados'
    - PHP
    - Programação
tags:
    - odbc
    - php
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/04/odbc.gif "odbc")](http://angelitomg.com/blog/wp-content/uploads/2012/04/odbc.gif)ODBC (Open Data Base Conectivity) é um padrão para acesso a banco de dados. Através do ODBC, podemos acessar diversas bases de dados, com diferentes linguagens de programação, utilizando uma única API.

Neste post vou mostrar como se conectar a um banco de dados utilizando ODBC através do PHP.

Para isto, utilizaremos um DSN (Data Source Name), ou seja, precisaremos criar uma fonte de dados para que o PHP possa se conectar através dela. Utilizaremos um banco de dados MDB com apenas uma tabela de exemplo:

**Tabela**: Regiões.

**Campos**: Codigo, Regiao.

A tabela regiões armazenará as regiões do Brasil, juntamente com um código.

Mãos a obra!

**1) Criando a conexão**

Para criar uma conexão DSN, vamos acessar o administrador de conexões ODBC do Windows. Ele deve ser executado com privilégios administrativos e fica localizado na pasta:

> %systemroot%\\system32\\odbcad32.exe

Após acessá-lo, será aberta então a janela do ODBC Administrator.

Vamos até a aba “Fontes de dados do sistema” e vamos adicionar uma nova fonte de dados com o nome de “db\_regioes”, apontando para nosso banco de dados (banco.mdb).

Pronto, a conexão está criada!

**2) Conectando-se através do PHP**

Para se conectar através do PHP, vamos utilizar a função **odbc\_connect()** passando como parâmetro o nome do DSN criado.

> &lt;?php
> 
> $conexao = odbc\_connect(“db\_regioes”, “”, “”);
> 
> ?&gt;

**3) Executando consultas**

Para executar consultas, sejam elas, inserções, atualizações ou pesquisas, utilizamos a funcao **odbc\_exec()**.

A função odbc\_exec() recebe como parâmetros a conexão ativa e também o comando SQL da consulta.

Vamos então executar uma consulta a todas as regiões cadastradas:

> &lt;?php
> 
> $sql = “SELECT \* FROM regioes ORDER BY Regiao”;
> 
> $consulta = odbc\_exec($conexao, $sql);
> 
> ?&gt;

**4) Obtendo os registros**

Após realizar a consulta, precisamos obter os registros encontrados. Para isto, utilizaremos a função **odbc\_fetch\_array()**. Esta função converte o resultado da consulta em um array associativo onde cada chave é o nome de um campo. Para buscar todos os registros encontrados, vamos utilizar um laço while juntamente com esta função. Após isto, vamos exibir os resultados:

> &lt;?php
> 
> while ($resultado = odbc\_fetch\_array($consulta)){
> 
> echo ‘&lt;p&gt;’ . $resultado\[‘Regiao’\] . ‘&lt;/p&gt;’;
> 
> }
> 
> ?&gt;

**5) Finalizando**

Após realizar todas as operações, vamos fechar a nossa conexão. Para isto, utilizaremos a função **odbc\_close()**.

> &lt;?php
> 
> odbc\_close($conexao);
> 
> ?&gt;

O código completo juntamente com o banco de dados pode ser baixado [AQUI](https://angelitomg.com/downloads/php_odbc.zip).

Simples assim! Até a próxima 😉
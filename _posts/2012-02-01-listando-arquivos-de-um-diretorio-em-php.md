---
id: 97
title: 'Listando arquivos de um diretório em PHP'
date: '2012-02-01T01:07:51-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=97'
permalink: /listando-arquivos-de-um-diretorio-em-php/
categories:
    - PHP
    - Programação
    - Scripts
tags:
    - php
    - programação
---

Uma coisa que quase todo programador já precisou fazer em algum momento, é listar todos os arquivos que se encontram em um determinado diretório. Em PHP, isto é uma coisa muito simples de se fazer. Faremos utilizando duas funções:

**opendir()** -&gt; utilizada para abrir um diretório

**readdir()** -&gt; utilizada para ler os arquivos de um determinado diretório

Vamos ao código:

> &lt;?php
> 
> /\* Diretorio que deve ser lido \*/
> 
> $dir = ‘arquivos/’;
> 
> /\* Abre o diretório \*/
> 
> $pasta= opendir($dir);
> 
> /\* Loop para ler os arquivos do diretorio \*/
> 
> while ($arquivo = readdir($pasta)){
> 
> /\* Verificacao para exibir apenas os arquivos e nao os caminhos para diretorios superiores \*/
> 
> if ($arquivo != ‘.’ &amp;&amp; $arquivo != ‘..’){
> 
> /\* Escreve o nome do arquivo na tela \*/
> 
> echo $arquivo . ‘&lt;br /&gt;’;
> 
> }
> 
> }
> 
> ?&gt;

Primeiro definimos o diretório a ser lido. Após isto, abrimos o diretório através da função **opendir()**. Depois de aberto, utilizamos um loop while com a função **readdir()** para percorrer cada um de seus registros, verificamos se o registro não é um link para o diretório atual ou diretório superior (‘.’ ou ‘..’) e então exibimos o nome do arquivo.

Simples assim!

Até a próxima 😉
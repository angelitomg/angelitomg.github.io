---
id: 133
title: 'Gerando erros personalizados com PHP'
date: '2012-02-07T15:09:40-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=133'
permalink: /gerando-erros-personalizados-em-php/
categories:
    - PHP
tags:
    - php
    - programação
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/02/Document-Code-PHP-Error.jpg "Document Code PHP Error")](http://angelitomg.com/blog/wp-content/uploads/2012/02/Document-Code-PHP-Error.jpg)Uma forma mais profissional de se exibir erros em aplicações PHP é através da função **trigger\_error()**. Esta função lança um erro personalizado, definido pelo usuário, da mesma forma que são exibidos os erros do PHP.

Através dessa função, podemos definir 3 tipos básicos de erros:

**E\_USER\_ERROR** -&gt;Erro fatal, exibe a mensagem e termina o script.

**E\_USER\_WARNING** -&gt; A execução do script não é afetada, porém são exibidos avisos dos erros encontrados.

**E\_USER\_NOTICE** -&gt; A execução do script também não é interrompida. Este tipo de erro serve para mostrar possíveis problemas que podem gerar um erro maior.

Para utilizar a função trigger\_error(), basta chamá-la, passando como primeiro parâmetro a string contendo o erro e no segundo parâmetro, o tipo do erro, sendo que os tipos permitidos são os descritos acima.

Vamos ao exemplo:

> &lt;?php
> 
> if (!isset($\_GET\[‘id’\])){
> 
> /\* Se uma variavel ID nao for passada por GET, termina o script \*/
> 
> trigger\_error(‘Nenhum ID foi informado!’, E\_USER\_ERROR);
> 
> }
> 
> if (!is\_numeric($\_GET\[‘id’\])){
> 
> /\* Se o ID passado por GET nao for numerico, exibe um aviso \*/
> 
> trigger\_error(‘Cuidado, o ID nao e numerico!’, E\_USER\_WARNING);
> 
> }
> 
> /\* Por fim, se o ID for menor que zero, lançamos um erro do tipo E\_USER\_NOTICE \*/
> 
> if ($\_GET\[‘id’\] &lt; 0){
> 
> trigger\_error(‘O ID e menor que 0!’, E\_USER\_NOTICE);
> 
> }
> 
> /\* Exibimos o valor do ID \*/
> 
> echo ‘ID -&gt; ‘ . $\_GET\[‘id’\];
> 
> ?&gt;

Note que quando não existe uma variável ID passada por GET, é lançado um E\_USER\_ERROR, como este é um erro fatal, o erro é exibido e o script termina imediatamente.

**Nota**: para que os erros sejam exibidos corretamente, certifique-se que a diretiva display\_errors do arquivo de configurações **php.ini** esteja marcada como **On**. Caso você não tenha acesso ao arquivo de configurações do PHP, adicione esta linha no começo do script:

> ini\_set(‘display\_errors’, ‘on’);

Esta linha faz com que os erros do PHP sejam exibidos na tela.

Espero que tenham gostado.

Até a próxima 😉
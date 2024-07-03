---
id: 263
title: 'Calculando o tempo de execução de scripts em PHP'
date: '2012-05-15T13:34:02-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=263'
permalink: /calculando-o-tempo-de-execucao-de-scripts-em-php/
categories:
    - PHP
    - Programação
    - Scripts
tags:
    - php
    - programação
---

[![](http://angelitomg.github.io/wp-content/uploads/2012/05/Actions-chronometer-icon.png "Actions-chronometer-icon")](http://angelitomg.github.io/wp-content/uploads/2012/05/Actions-chronometer-icon.png)Neste post vou disponibilizar a vocês uma mini biblioteca para o cálculo de tempo em PHP. Seu uso é muito simples:

Basta incluir o arquivo no script que se deseja medir o tempo, chamar a função **startExec()** no começo do script e a função **endExec()** no final do script. A função endExec() retorna o tempo de execução do script em segundos.

Vamos a um exemplo simples:

> &lt;?php
> 
> include(‘exec\_time.php’);
> 
> startExec();
> 
> sleep(2);
> 
> echo endExec();
> 
> ?&gt;

O script pode ser baixado [AQUI](https://angelitomg.github.io/downloads/exec_time.zip).

Até a próxima 😉
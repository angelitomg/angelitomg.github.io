---
id: 4
title: 'Verificando o fim de um array em PHP'
date: '2012-01-23T19:26:45-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=4'
permalink: /verificando-o-fim-de-um-array-com-php/
categories:
    - PHP
    - Programação
tags:
    - php
    - programação
---

Muitas vezes quando precisamos percorrer um array, precisamos saber quando o array chega ao seu fim para tomarmos uma certa decisão. Para fazer isto em PHP é muito simples, basta combinarmos a função end juntamente com a função array\_keys.

A função end retorna o último elemento de um array. Já a função array\_keys, lista todas as chaves de um array. Vamos ao exemplo:

> &lt;?php
> 
> $frutas = array(‘morango’ =&gt; ‘vermelho’, ‘maca’ =&gt; ‘verde’, ‘abacaxi’ =&gt; ‘amarelo’, ‘uva’ =&gt; ‘roxa’);
> 
> foreach ($frutas as $fruta =&gt; $cor){
> 
> if (end(array\_keys($frutas)) == $fruta){  
> echo “$fruta e o ultimo item do array. Sua cor e $cor.”;  
> }
> 
> }
> 
> ?&gt;

Simples! Até a próxima 😉
---
id: 107
title: 'Comparando strings com PHP'
date: '2012-02-06T11:40:58-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=107'
permalink: /comparando-string-com-php/
categories:
    - PHP
    - Programação
tags:
    - php
---

Quando o assunto é comparação de strings em PHP, muitos logo pensam em utilizar o operador de igualdade (==), porém a forma mais efeciente e precisa de se fazer isto, é utilizar as funções oferecidas pelo próprio PHP, dentre as quais, as mais populares são: **strcmp()** e **strcasecmp()**.

Vamos as explicações:

**strcmp(string $str1, string $str2)** -&gt; Recebe duas strings como parâmetro. Retorna &lt; 0 se a $str1 for menor que $str. Retorna &gt; 0 se $str1 for maior que a $str2 e finalmente, retorna 0, se as duas strings forem iguais.

**strcasecmp(string $str1, string $str2)** -&gt; Idêntica a função strcmp(), com a diferença que a strcmp() diferencia maiúsculas e minúsculas, e a função strcasecmp() não diferencia maiúsculas e minúsculas.

Vamos aos exemplos:

> &lt;?php
> 
> $str1 = ‘blog’;
> 
> $str2 = ‘Blog’;
> 
> echo strcmp($str1, $str2);
> 
> echo strcasecmp($str1, $str2);
> 
> ?&gt;

Até a próxima 😉
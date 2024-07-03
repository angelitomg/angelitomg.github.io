---
id: 189
title: 'Operador ternário em PHP'
date: '2012-04-02T17:12:05-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=189'
permalink: /operador-ternario-e-php/
categories:
    - PHP
    - Programação
tags:
    - 'operador ternáro'
    - php
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/04/ternary_operator.png "ternary_operator")](http://angelitomg.com/blog/wp-content/uploads/2012/04/ternary_operator.png)O PHP, assim como outras linguagens de programação, oferece um recurso muito útil e prático: o operador ternário. O operador ternário permite que seja realizada uma verificação e logo em seguida define suas ações caso a condição seja verdadeira e falsa, tudo isso em apenas uma linha. Em outras palavras pode ser chamado de “IF de uma linha”.

A sintaxe do operador ternário é a seguinte:

> (condicao) ? verdadeiro : falso

Vamos a um exemplo:

> &lt;?php
> 
> $num1 = 10;
> 
> $num2 = 20;
> 
> $maior = ($num1 &gt; $num2) ? $num1 : $num2;
> 
> ?&gt;

No exemplo acima, temos 3 variáveis: $num1, $num2 e $maior. Nossa condição é: se $num1 for maior que $num2, então $maior recebe o valor de $num1, caso contrário, ou seja, caso a condição seja falsa, $maior recebe $num2.

Podemos também utilizar o operador diretamente com o comando echo e imprimir o resultado diretamente na tela:

> &lt;?php
> 
> $num = 10;
> 
> echo ($num &gt; 0) ? ‘O valor de num é maior que 0!’ : ‘O valor de num é menor ou igual a zero!’;
> 
> ?&gt;

Agora basta usar a criatividade e pegar intimidade com o operador ternário.

Até a próxima 😉
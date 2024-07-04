---
id: 1043
title: 'Novidades do PHP 7 &#8211; Parte 2/5: Scalar Type Hints'
date: '2015-12-17T09:55:35-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1043'
permalink: /novidades-do-php-7-parte-2-5-scalar-type-hints/
categories:
    - PHP
    - Programação
tags:
    - php
    - php7
---

O PHP é uma linguagem fracamente tipada, ou seja, não dá muita bola em relação a tipos de dados. Uma variável pode conter um float, logo depois uma string e no final ainda pode se tornar um objeto.

Muitos não gostam do PHP por causa deste excesso de liberdade. Com a chegada do PHP 7, foi introduzido um recurso chamado scalar type hints, ou indução de tipo escalar. Assim, o programador pode definir o tipo de parâmetro que um método deve receber, o tipo de retorno de uma função, etc.

No PHP 5, isto já era possível, porém funcionava apenas com arrays e objetos. No PHP 7 foram introduzidos os tipos **float**, **int**, **string** e **boolean**. Porém para que o PHP “reclame” se um tipo incorreto foi passado ou retornado, a opção **strict\_types** deve estar ativada.

Vamos a um exemplo prático:

`<?php declare(strict_types=1);` 

`function foo(string $bar){` 

`echo 'Bar: ' . $bar;` 

`}` 

`foo(0.2);` 

`?>` 

Na primeira linha, estamos informando que o PHP deve executar a verificação de tipos, ou seja, deve reclamar caso algum parâmetro ou retorno de função esteja retornando algo diferente do esperado.

Logo após declaramos a função **foo** que deve receber uma **string** como parâmetro. Porém na chamada da função, estamos passando um **float**, logo, vamos receber um erro do tipo **Uncaught TypeError**.

Fique tranquilo, por padrão a verificação de tipos vem desativada. Para ver mais sobre type hinting, acesse o [site oficial do PHP](http://php.net).

O [próximo post](http://angelitomg.com/blog/novidades-do-php-7-parte-3-5-null-coalesce-operator/) será sobre o **null coalesce operator**.

Até a próxima 😉
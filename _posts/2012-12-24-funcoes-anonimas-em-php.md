---
id: 518
title: 'Funções anônimas em PHP'
date: '2012-12-24T13:48:01-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=518'
permalink: /funcoes-anonimas-em-php/
categories:
    - PHP
    - Programação
tags:
    - 'funções anônimas'
    - php
    - programação
---

Funções anônimas são funções que não tem um nome definido. Ou seja, podemos passar uma função como parâmetro ou armazenar uma função dentro de uma variável.

Este recurso é muito utilizado em parâmetros de callback, já que ao invés de criar uma função somente para um uso específico, a própria função é passada como parâmetro.

Abaixo segue um exemplo de função anônima:

`$msg = function($str){`

`echo $msg;`

`};`

`$msg('Alo Mundo!');`

Até a próxima 😉
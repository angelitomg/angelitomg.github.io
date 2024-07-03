---
id: 511
title: 'O que é a StdClass do PHP?'
date: '2012-12-24T13:44:47-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=511'
permalink: /o-que-e-a-stdclass-do-php/
categories:
    - PHP
    - Programação
tags:
    - php
    - programação
    - stdclass
---

A **StdClass** é uma classe predefinida do PHP. Ela é vazia, ou seja, não possui métodos nem propriedades. Mas qual o objetivo disto? Ela é a classe padrão dos objetos que não são declarados, ou seja, quando você converte um array ou algum outro tipo para objeto, na verdade está criando um objeto da **StdClass**. É útil também utilizar a **StdClass** quando se deseja criar um objeto vazio e ir adicionando as propriedades conforme necessário.

Um exemplo de uso da StdClass:

`$obj = new StdClass;`

`$obj->nome = 'teste';`

`var_dump($obj);`

Até a próxima 😉
---
id: 1039
title: 'Novidades do PHP 7 &#8211; Parte 1/5: Spaceship Operator'
date: '2015-12-14T15:28:04-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1039'
permalink: /novidades-do-php-7-parte-1-5-spaceship-operator/
categories:
    - PHP
    - Programação
tags:
    - php
    - php7
---

Com o lançamento do PHP 7, vou fazer uma série de pequenos posts falando sobre as principais novidades da linguagem. No post de hoje, vou começar falando do **spaceship operator**, ou em português, operador espaçonave.

O spaceship operator tem um funcionamento bastante semelhante do da função [strcmp](http://angelitomg.com/blog/comparando-string-com-php/). Ele basicamente faz uma comparação e traz os seguintes retornos:

- Caso o elemento da direita seja maior, retorna **-1**.
- Caso os dois elementos sejam iguais, retorna 0.
- Caso o elemento da esquerda seja maior, retorna **1**.

Um exemplo prático:

`<?php echo 1 <=> 2; // Retorna -1` 

`echo 1 <=> 1; // Retorna 0` 

`echo 2 <=> 1; // Retorna 1<br></br>` 

`?>` 

No [próximo post](http://angelitomg.com/blog/novidades-do-php-7-parte-2-5-scalar-type-hints/) vou falar sobre **Scalar Type Hints**.

Até a próxima 😉
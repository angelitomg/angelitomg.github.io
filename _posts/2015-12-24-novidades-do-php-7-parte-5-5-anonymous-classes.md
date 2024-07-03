---
id: 1047
title: 'Novidades do PHP 7 &#8211; Parte 5/5: Anonymous Classes'
date: '2015-12-24T11:20:31-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1047'
permalink: /novidades-do-php-7-parte-5-5-anonymous-classes/
categories:
    - PHP
    - Programação
tags:
    - php
    - php7
---

No quinto e último post da série sobre as novidades do PHP 7, vou falar sobre classes anônimas.

Classes anônimas é um recurso introduzido no PHP 7 que permite ao desenvolvedor criar classes de forma dinâmica, ou seja, podemos passar uma classe como parâmetro de um método ou função.

Como sempre, nada melhor que um exemplo:

`<?php<br></br>var_dump(new class {<br></br>public $bar = 'test';<br></br>public function foo(){<br></br>return $this->bar;<br></br>}<br></br>});<br></br>?><br></br>`

No código acima, estamos criando um classe diretamente na chamada da função **var\_dump**, dinamicamente, sem a necessidade de instanciar um objeto.

Caso tenha perdido algum dos textos da série, basta acessar os links:

- [Novidades do PHP 7 – Parte 1/5: Spaceship Operator](http://angelitomg.com/blog/novidades-do-php-7-parte-1-5-spaceship-operator/)
- [Novidades do PHP 7 – Parte 2/5: Scalar Type Hints](http://angelitomg.com/blog/novidades-do-php-7-parte-2-5-scalar-type-hints/)
- [Novidades do PHP 7 – Parte 3/5: Null Coalesce Operator](http://angelitomg.com/blog/novidades-do-php-7-parte-3-5-null-coalesce-operator/)
- [Novidades do PHP 7 – Parte 4/5: Return Type Declarations](http://angelitomg.com/blog/novidades-do-php-7-parte-4-5-return-type-declarations/)

Até a próxima 😉
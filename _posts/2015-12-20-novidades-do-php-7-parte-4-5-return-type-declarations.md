---
id: 1045
title: 'Novidades do PHP 7 &#8211; Parte 4/5: Return Type Declarations'
date: '2015-12-20T10:00:58-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1045'
permalink: /novidades-do-php-7-parte-4-5-return-type-declarations/
categories:
    - PHP
    - Programação
tags:
    - php
    - php7
---

A chegada do PHP 7 trouxe mudanças que deram ao PHP, características de uma linguagem fortemente tipada. Dentre elas estão[ scalar type hints](http://angelitomg.com/blog/novidades-do-php-7-parte-2-5-scalar-type-hints/) e return type declarations, ou declaração de tipos de retorno.

Agora, quando construímos um método ou função, podemos definir o tipo de retorno que este deve ter. Por exemplo:

`<br></br><?php<br></br>declare(strict_types=1);<br></br>function dice() : int {<br></br>return '5';<br></br>}<br></br>dice();<br></br>?><br></br>`

O código acima executa uma função que deve retornar um int, porém está retornando uma string, fazendo assim com que um erro seja exibido. No exemplo abaixo, temos o mesmo código, porém funcionando da forma correta:

`<br></br><?php<br></br>declare(strict_types=1);<br></br>function dice() : int {<br></br>return 5;<br></br>}<br></br>dice();<br></br>?><br></br>`

Lembrando que a opção **strict\_types** deve estar ativada para que o se comporte como uma linguagem fortemente tipada.

O [último post](http://angelitomg.com/blog/novidades-do-php-7-parte-5-5-anonymous-classes/) desta série será sobre **anonymous classes**.

Até a próxima 😉
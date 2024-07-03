---
id: 1041
title: 'Novidades do PHP 7 &#8211; Parte 3/5: Null Coalesce Operator'
date: '2015-12-18T08:00:00-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1041'
permalink: /novidades-do-php-7-parte-3-5-null-coalesce-operator/
categories:
    - PHP
    - Programação
tags:
    - php
    - php7
---

Na web, principalmente no processamento de formulários, diversas vezes precisamos checar se algo existe. Normalmente isto pode ser feito através da função **isset** ou algo semelhante.

Vamos imaginar um formulário de contato, onde precisamos verificar se o campo nome existe. No modo antigo, poderia ser feito desta maneira:

`$nome = (isset($_POST['nome'])) ? $_POST['nome'] : 'sem nome';`

No exemplo acima, verificamos se a variável **$\_POST\[‘nome’\]** existe. Caso exista, atribuimos seu valor a variável **$nome**. Caso não exista, atribuimos a string ‘**sem nome**‘ a variável **$nome**.

Com o null coalesce operator, a mesma coisa pode ser feita de uma forma mais fácil e simples:

`$nome = $_POST['nome'] ?? 'sem nome';`

Com certeza o null coalesce operator era algo que estava faltando no PHP.

O [próximo post](http://angelitomg.com/blog/novidades-do-php-7-parte-4-5-return-type-declarations/) será sobre **return type declarations**.

Até a próxima 😉
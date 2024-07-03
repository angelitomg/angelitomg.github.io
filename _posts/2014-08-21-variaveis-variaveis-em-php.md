---
id: 812
title: 'Variáveis variáveis em PHP'
date: '2014-08-21T22:39:50-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=812'
permalink: /variaveis-variaveis-em-php/
categories:
    - PHP
    - Programação
tags:
    - php
    - programação
    - 'variaveis variaveis'
---

Em PHP uma variável variável é uma variável criada dinamicamente, ou seja, seu nome na verdade é o conteúdo de outra variável.

Vamos a um pequeno exemplo:

```
<?php
    $var = 'hello';
    $$var = 'world';
    echo $var . ' - ' . $$var . ' - ' . $hello;
?>
```

Variáveis variáveis são acessadas através da junção de múltiplos cifrões. Assim, **$$var** significa que estamos acessando na verdade a variável chamada **$hello**, já que o conteudo de **$var** é **‘hello’**.

Isto pode ser útil quando é necessário criar variáveis a partir de elementos de um array. Por exemplo:

```
<?php
    $_POST = array('var1' => 'teste1', 'var2' => 'teste2');
    foreach ($_POST as $k => $v) {
        $$k = $v;
    }
    echo '<p>' . $var1 . '</p>'; // Exibirá teste1
    echo '<p>' . $var2 . '</p>'; // Exibirá teste2
?>
```

Até a próxima 😉
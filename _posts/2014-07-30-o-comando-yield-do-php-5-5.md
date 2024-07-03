---
id: 795
title: 'O comando yield do PHP 5.5'
date: '2014-07-30T17:38:03-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=795'
permalink: /o-comando-yield-do-php-5-5/
categories:
    - PHP
    - Programação
tags:
    - php
    - yield
---

No PHP 5.5, com a introdução dos geradores, um novo comando foi adicionado a linguagem. Este comando é o **yield**.

A palavra-chave yield, já é conhecida em outras linguagens, como Python, por exemplo. Na verdade, o comando yield é bastante parecido com o comando **return**, com a diferença que usando yield, a função continua em execução, ou seja, o valor será retornado e a função continuará executando o restante do código.

Isto é muito útil em situações onde precisamos utilizar uma função em um loop **foreach**. Ao invés de armazenar todos os dados em um array e então retorná-lo para ser utilizado no foreach, podemos retornar os valores conforme a execução da função. Isto traz um ganho de desempenho, visto que, criar um array para armazenar os valores consome uma certa quantidade de memória. Isto aumenta mais ainda se a quantidade de dados retornados for grande.

Vamos então a dois exemplos bem simples, um utilizando a palavra chave yield para retornar os dados e outro utilizando o método tradicional.

Exemplo com yield:

```
<?php

function getPaises(){
    $paises = array('Brasil', 'China', 'Costa Rica', 'Dinamarca', 'Egito');
    for ($i = 0; $i < sizeof($paises); $i++){
        yield $paises[$i];
    }
}

foreach (getPaises() as $pais) {
    echo "<p>{$pais}</p>";
}

?>
```

Exemplo sem yield:

```
<?php

function getPaises(){
    $paises = array('Brasil', 'China', 'Costa Rica', 'Dinamarca', 'Egito');
    $dados = array();
    for ($i = 0; $i < sizeof($paises); $i++){
        $dados[] = $paises[$i];
    }
    return $dados;
}

foreach (getPaises() as $pais) {
    echo "<p>{$pais}</p>";
}

?>
```

No primeiro exemplo, os dados são retornados instantaneamente. Já no segundo exemplo, sem utilizar a palavra-chave yield, os dados são processados, armazenados em um array temporário e só depois retornados para serem utilizados no foreach.

É claro que neste cenário não haverá muito ganho de desempenho, pois estamos trabalhando com poucos elementos, porém com uma grande quantidade de dados, o uso do comando yield irá trazer uma boa economia de memória.

O arquivo com os exemplos deste post pode ser baixado [AQUI](https://www.angelitomg.github.io/downloads/exemplo-yield-php.zip).

Até a próxima 😉
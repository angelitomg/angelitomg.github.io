---
id: 705
title: 'Enviando dados via POST com file_get_contents() em PHP'
date: '2013-11-21T10:31:04-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=705'
permalink: /enviando-dados-via-post-com-file_get_contents-em-php/
categories:
    - PHP
    - Programação
tags:
    - file_get_contents()
    - php
    - post
    - programação
---

A função **file\_get\_contents()** é utilizada para obter dados de arquivos e URLs. Através dela, também é possível enviar dados via POST para uma página web e então receber o resultado desta página.

Para isto, basta utilizar o terceiro parâmetro da função. O terceiro parâmetro deve ser um stream de contexto que pode ser criado através da função **stream\_context\_create()**.

Primeiro, vamos criar a query HTTP que será enviada por POST:

` $dados = http_build_query(array('firstname' => 'John', 'lastname' => 'Doe'));`

Em seguida, vamos criar o stream de contexto que será passado como parâmetro para a função **file\_get\_contents()**:

`$contexto = stream_context_create(array(`  
`    'http' => array(`  
`        'method' => 'POST',`  
`        'content' => $dados,`  
`        'header' => "Content-type: application/x-www-form-urlencoded\r\n"`  
`        . "Content-Length: " . strlen($dados) . "\r\n",`  
`    )`  
`));`

Após isto, basta chamar a função e obter a resposta:

`$resposta = file_get_contents('http://url_de_teste/teste.php', null, $contexto);`

Um exemplo completo pode ser baixado [AQUI](https://angelitomg.github.io/downloads/file_get_contents_post.zip).

Até a próxima 😉
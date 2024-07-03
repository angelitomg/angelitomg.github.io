---
id: 489
title: 'Traits em PHP'
date: '2012-12-20T12:39:33-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=489'
permalink: /traits-em-php/
categories:
    - PHP
    - Programação
tags:
    - php
    - programação
    - traits
---

O uso de traits é um recurso presente a partir do PHP 5.4 que permite a reutilização de métodos sem o uso de herança.

Basicamente o usuario cría um trait, insere métodos que serão reutilizados por outras classes e após isto usa o trait criado em uma classe, obtendo assim acesso a todos os métodos do trait sem precisar utilizar herança.

Vamos então criar um trait:

`trait HelloWorld { `

` function display(){ echo 'Hello World'; } `

` }`

E vamos utilizá-lo em uma classe:

` class AloMundo{ `

` use HelloWorld; `

` }`

Assim, temos acesso a todos os métodos do trait **HelloWorld** na classe **AloMundo**.

Um exemplo mais detalhado pode ser baixado [AQUI](https://angelitomg.github.io/downloads/exemplo_traits.zip).

Até a próxima 😉
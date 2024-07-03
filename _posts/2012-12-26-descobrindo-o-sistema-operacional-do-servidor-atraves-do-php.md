---
id: 536
title: 'Descobrindo o sistema operacional do servidor através do PHP'
date: '2012-12-26T12:29:49-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=536'
permalink: /descobrindo-o-sistema-operacional-do-servidor-atraves-do-php/
categories:
    - PHP
    - Programação
    - Sysadmin
tags:
    - 'descobrir sistema operacional'
    - php
    - programação
---

Certas vezes é necessário descobrir qual sistema operacional o servidor que está executando nossa aplicação PHP utiliza. Esta informação fica contida na constante **PHP\_OS**. Vou mostrar um exemplo do seu valor em diferentes plataformas. Vamos utilizar o comando:

`<?php echo PHP_OS . "\n"; ?>`

E o resultado:

Em um sistema **Mac OS X** (10.6.8):

`Darwin`

Em um sistema **Linux** (CentOS 6.3):

`Linux`

Em um sistema **Windows** (Windows Server 2008):

`WINNT`

Até a próxima 😉
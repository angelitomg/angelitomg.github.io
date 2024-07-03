---
id: 680
title: 'Descobrindo o sistema operacional através do PHP'
date: '2013-04-29T18:55:28-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=680'
permalink: /descobrindo-o-sistema-operacional-atraves-do-php/
categories:
    - PHP
    - Programação
tags:
    - php
    - php_os
    - programação
    - 'versão sistema operacional'
---

O PHP possui uma constante chamada **PHP\_OS** que contém o nome do sistema operacional que está rodando a linguagem. Para descobrir qual sistema está rodando o script, basta exibir o conteúdo desta constante:

`<?php echo PHP_OS; ?>`

E o resultado será algo parecido com isto (dependendo do sistema operacional):

`Darwin`

Alguns dos valores possíveis são:

- WINNT
- WIN32
- Linux
- FreeBSD
- OpenBSD
- Darwin

Até a próxima 😉
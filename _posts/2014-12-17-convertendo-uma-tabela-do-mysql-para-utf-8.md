---
id: 908
title: 'Convertendo uma tabela do MySQL para UTF-8'
date: '2014-12-17T13:56:53-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=908'
permalink: /convertendo-uma-tabela-do-mysql-para-utf-8/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
    - utf8
---

Em algumas ocasiões, é preciso converter uma tabela do MySQL e seus campos para UTF-8. Para realizar este procedimento, basta utilizar o comando **ALTER TABLE** juntamente com o comando **CONVERT TO**:

`ALTER TABLE usuarios CONVERT TO CHARACTER SET utf8 COLLATE utf8_unicode_ci;`

No exemplo acima, a tabela **usuarios** e seus campos de texto foram convertidos para UTF-8.

Até a próxima 😉
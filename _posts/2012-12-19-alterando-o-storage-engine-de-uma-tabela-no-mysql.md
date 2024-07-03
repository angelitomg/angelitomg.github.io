---
id: 463
title: 'Alterando o storage engine de uma tabela no MySQL'
date: '2012-12-19T13:15:43-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=463'
permalink: /alterando-o-storage-engine-de-uma-tabela-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - 'alterar storage engine'
    - innodb
    - mysql
---

Muitas vezes precisamos alterar o storage engine de uma tabela. No MySQL isto é algo bem simples e pode ser feito utilizando o comando ALTER TABLE.

Para alterar o storage engine de uma tabela basta digitar:

`ALTER TABLE nome_tabela ENGINE = 'InnoDB';`

Onde **nome\_tabela** é o nome da tabela a ser atualizada e **InnoDB** é o novo storage engine da tabela.

Até a próxima 😉
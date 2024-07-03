---
id: 953
title: 'Expressões Regulares no MySQL'
date: '2015-03-17T15:09:13-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=953'
permalink: /expressoes-regulares-no-mysql/
categories:
    - 'Banco de Dados'
    - 'Expressões Regulares'
    - MySQL
tags:
    - mysql
    - regex
---

Expressões regulares são ferramentas extremamente poderosas para realizar buscas com strings. O MySQL por sua vez, possui um comando fantástico, onde é possível buscar registros com o auxílio de expressões regulares. Este comando é o **REGEXP**, ou, **RLIKE**.

Ele é bastante semelhante ao **LIKE**, porém sem o uso dos caracteres **\_** e **%**. Exemplo:

SELECT \* FROM products WHERE name REGEXP ‘^Refrigerante’

No exemplo acima, vamos buscar todos os produtos que comecem com a string ‘**Refrigerante**‘. Para ver as expressões suportadas, [acesse a documentação oficial](http://dev.mysql.com/doc/refman/5.0/en/regexp.html).

Ahh, o **RLIKE** é apenas um alias para o **REGEXP**.

Até a próxima 😉
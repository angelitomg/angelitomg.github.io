---
id: 955
title: 'Utilizando LIMIT no Firebird'
date: '2015-03-17T14:38:28-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=955'
permalink: /utilizando-limit-no-firebird/
categories:
    - 'Banco de Dados'
tags:
    - firebird
    - limit
---

Bom, na verdade o Firebird não possui o comando **LIMIT.** Porém, nem tudo está perdido, entra em cena então, os comandos **FIRST** e **SKIP**. Estes dois possuem um comportamento semelhante ao LIMIT do MySQL, permitindo selecionar uma determinada faixa de registro de uma consulta.

No MySQL por exemplo, quando precisamos selecionar os 10 primeiros registros de uma consulta, utilizamos:

`SELECT * FROM products LIMIT 10`

Se fosse um banco Firebird, o mesmo comando seria executado da seguinte forma:

`SELECT FIRST 10 * FROM products`

Em um outro exemplo utilizando MySQL, onde precisamos recuperar uma determinada faixa de registros, utiizamos o seguinte comando:

`SELECT * FROM products LIMIT 30, 10`

Ou seja, selecionamos os **10** primeiros registros, a partir do **30º** registro. No caso do Firebird, bastaria executar:

`SELECT FIRST 10 SKIP 30 * FROM products`

Até a próxima 😉
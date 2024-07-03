---
id: 268
title: 'Diferença entre os campos TEXT e BLOB do MySQL'
date: '2012-05-15T13:45:39-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=268'
permalink: /diferenca-entre-os-campos-text-e-blob-do-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
---

[![](http://angelitomg.github.io/wp-content/uploads/2012/04/mysql-logo.png "mysql-logo")](http://angelitomg.github.io/wp-content/uploads/2012/04/mysql-logo.png)O MySQL possui dois tipos de campos muito similares para armazenamento de textos: o tipo TEXT e o tipo BLOB. Ambos possuem as variações **TINY**, **MEDIUM** e **LONG**. Assim temos **TINYTEXT**, **TEXT**, **MEDIUMTEXT**, **LONGTEXT** e também **TINYBLOB**, **BLOB**, **MEDIUMBLOB** e **LONGBLOB**. Os tipos TEXT e BLOB portanto tem apenas uma única diferença: os campos do tipo TEXT não são case-sensitive, já os campos BLOB são case-sensitive.

Vamos imaginar uma tabela chamada clientes e um campo chamado nome, com o seguinte valor:

> nome -&gt; Maria

E valos imaginar a seguinte consulta:

> SELECT \* FROM clientes WHERE nome = ‘maria’

Se o campo for do tipo TEXT, a consulta acima irá retornar o campo previamente definido, porém se o campo for do tipo BLOB, o campo acima não será retornado na consulta, já que campos TEXT são case-insensitive e campos BLOB são case-sensitive.

Até a próxima 😉
---
id: 195
title: 'Forçando busca case sensitive no MySQL'
date: '2012-04-02T15:07:34-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=195'
permalink: /forcando-busca-case-sensitive-n-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
    - 'operador binary'
---

Muitas vezes é necessário fazer uma busca case-sensitive em um campo, porém em alguns casos o collation pode nao permitir isto ou ainda o campo a ser pesquisado ser do tipo BLOB (mesma coisa que o campo TEXT, porém não é case sensitive). Para isto, devemos forçar o MySQL a fazer uma comparação binária entre as strings. Isto é feito através do operador **BINARY**.

Vamos a um exemplo:

> SELECT ‘Joao’ LIKE ‘%joao%’;

No exemplo acima, sem o operador BINARY, o resultado será 1, já que não estamos fazendo uma comparação binária.

> SELECT BINARY ‘Joao’ LIKE ‘%joao%’;

Ja neste exemplo, o resultado será 0, pois ‘Joao’ é diferente de ‘joao’ binariamente.

Até a próxima 😉
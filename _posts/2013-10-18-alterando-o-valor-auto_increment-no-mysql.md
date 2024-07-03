---
id: 719
title: 'Alterando o valor AUTO_INCREMENT no MySQL'
date: '2013-10-18T14:34:16-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=719'
permalink: /alterando-o-valor-auto_increment-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - auto_increment
    - mysql
---

Em certas ocasiões precisamos reiniciar ou definir um valor diferente de auto incremento em alguma tabela no MySQL. Para alterar o valor de auto incremento, basta utilizar o comando **ALTER TABLE**:

`ALTER TABLE estoque AUTO_INCREMENT = 100;`

No comando acima, alteramos o valor de auto incremento da tabela **estoque** para **100**, assim, a coluna que possuir a flag **AUTO\_INCREMENT** nesta tabela será incrementada a partir do valor 100 a cada nova inserção.

Até a próxima 😉
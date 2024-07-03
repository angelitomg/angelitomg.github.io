---
id: 1139
title: 'Analisando e Otimizando Tabelas no MySQL'
date: '2016-01-11T22:34:41-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1139'
permalink: /analisando-e-otimizando-tabelas-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
---

No MySQL, quando uma tabela sofre constantes inserções e remoções, podem haver certos problemas relacionados a performance.

Para solucionar estes problemas, os comandos **analyze** e **optimize** podem ser utilizados. Basicamente eles analisam e otimizam as tabelas respectivamente. Seria como uma espécie de “desfragmentação” das tabelas.

Para fazer o procedimento de análise e otimização, basta executar os comandos:

`ANALYZE TABLE clients;`

`OPTIMIZE TABLE clients;`

No exemplo acima a tabela **clients** foi analisada e otimizada. Após este procedimento, as consultas a esta tabela possivelmente serão executadas mais rapidamente.

Até a próxima 😉
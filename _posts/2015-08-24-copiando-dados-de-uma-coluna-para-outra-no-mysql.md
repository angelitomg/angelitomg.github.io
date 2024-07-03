---
id: 1011
title: 'Copiando dados de uma coluna para outra no MySQL'
date: '2015-08-24T15:49:45-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1011'
permalink: /copiando-dados-de-uma-coluna-para-outra-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
---

Uma dica simples e rápida para uma tarefa trivial em banco de dados: copiar os dados de uma coluna para outra.

Vamos supor que queremos copiar o valor do campo **preco\_promocao** para o campo **preco\_venda** na tabela **produtos**. Para isto, basta utilizar:

`UPDATE produtos SET preco_venda = preco_promocao`

Até a próxima 😉
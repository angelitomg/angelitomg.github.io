---
id: 898
title: 'Criando índices no MySQL'
date: '2014-12-03T09:45:18-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=898'
permalink: /criando-indices-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - indices
    - mysql
---

A criação de índices em tabelas do MySQL é um recurso indispensável na otimização de consultas. Através da criação de índices, o MySQL consegue encontrar os dados mais facilmente, evitando o trabalho de ter que percorrer cada registro da tabela. Em tabelas com muitos registros, o ganho de desempenho é monstruoso.

Vamos supor que possuímos uma tabela de vendas (**venda\_produtos**) e vamos de criar um índice no campo **id\_produto**. Para realizar esta operação, basta utilizar a sintaxe:

`CREATE INDEX `venda_produto.idx_id_produto` ON venda_produto(id_produto)`

No exemplo acima, criamos um índice chamado **venda\_produto.idx\_id\_produto** na tabela **venda\_produto**, onde o campo a ser indexado é **id\_produto**.

A partir de agora as consultas que utilizam o campo **id\_produto** como critério na tabela **venda\_produto** ficarão muito mais rápidas.

Em caso de campos muito longos, você também pode especificar um tamanho para o índice, por exemplo:

`CREATE INDEX `venda_produto.idx_id_produto` ON venda_produto(id_produto(2))`

No exemplo acima informamos que o índice deve levar em consideração apenas os 2 primeiros dígitos do campo **id\_produto**.

Tome muito cuidado ao criar índices. Faça um estudo e veja quais campos estão consumindo mais processamento na hora das consultas antes de criá-los.

Até a próxima 😉
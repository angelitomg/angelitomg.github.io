---
id: 348
title: 'Tutorial básico sobre joins'
date: '2012-12-12T14:38:01-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=348'
permalink: /tutorial-basico-sobre-joins/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - 'banco de dados'
    - joins
    - mysql
---

Joins (junções) são um recurso presente nos bancos de dados relacionais, através da qual é possível juntar o conteúdo de duas tabelas através de um critério. É um conceito que muitas vezes quem está iniciando no mundo dos bancos de dados relacionais tem dificuldade de entender. As joins mais utilizadas são: **INNER**, **LEFT**, **RIGHT**, **CROSS**.

Neste tutorial vou utilizar o MySQL, apesar do conceito e possivelmente os comandos não mudarem muito de banco para banco. Vamos utilizar 2 tabelas: **pedidos** e **vendedores**.

<div class="wp-caption aligncenter" id="attachment_349" style="width: 463px">[![Tabela Pedidos](http://angelitomg.github.io/wp-content/uploads/2012/12/join_1.png "Tabela Pedidos")](http://angelitomg.github.io/wp-content/uploads/2012/12/join_1.png)Tabela Pedidos

</div><div class="wp-caption aligncenter" id="attachment_350" style="width: 217px">[![Tabela Vendedores](http://angelitomg.github.io/wp-content/uploads/2012/12/join_2.png "Tabela Vendedores")](http://angelitomg.github.io/wp-content/uploads/2012/12/join_2.png)Tabela Vendedores

</div>### INNER JOIN

Inner join (junção interna) é um tipo de junção na qual somente serão selecionados os resultados, cujas colunas informadas forem iguais nas duas tabelas. Vamos a um exemplo:

> SELECT pedidos.\*, vendedores.\* FROM pedidos INNER JOIN vendedores ON pedidos.vendedor\_id = vendedores.id

<div class="wp-caption aligncenter" id="attachment_351" style="width: 417px">[![Resultado Inner Join](http://angelitomg.github.io/wp-content/uploads/2012/12/join_3.png "Resultado Inner Join")](http://angelitomg.github.io/wp-content/uploads/2012/12/join_3.png)Resultado Inner Join

</div>No exemplo acima, selecionamos todos os dados da tabela pedidos e da tabela vendedores, porém somente os registros cuja coluna vendedor\_id da tabela pedidos seja igual a coluna id da tabela vendedores, obtem assim todos os pedidos que tiverem o ID de um vendedor cadastrado.

### LEFT JOIN

Left join (junção esquerda) é semelhante ao INNER JOIN, porém aqui **TODOS** os dados da tabela a esquerda serão selecionados, independentes se possuirem ou não alguma relação com a tabela da direita.

> SELECT pedidos.\*, vendedores.\* FROM pedidos LEFT JOIN vendedores ON pedidos.vendedor\_id = vendedores.id

<div class="wp-caption aligncenter" id="attachment_352" style="width: 437px">[![Resultado Left Join](http://angelitomg.github.io/wp-content/uploads/2012/12/join_4.png "join_4")](http://angelitomg.github.io/wp-content/uploads/2012/12/join_4.png)Resultado Left Join

</div>No exemplo acima, todos os pedidos serão retornados, independente de tiverem ou não relação com algum vendedor. Os vendedores que tiverem alguma relação com algum pedido também serão retornados.

### RIGHT JOIN

Right join (juncão direita) é idêntica a LEFT JOIN, com a diferença que neste caso todos os dados da coluna da direita serão selecionados, independentemente se os dados da coluna da direita tiverem ou não relação com os dados da coluna da esquerda.

> SELECT pedidos.\*, vendedores.\* FROM pedidos RIGHT JOIN vendedores ON pedidos.vendedor\_id = vendedores.id

<div class="wp-caption aligncenter" id="attachment_353" style="width: 430px">[![Resultado Right Join](http://angelitomg.github.io/wp-content/uploads/2012/12/join_5.png "join_5")](http://angelitomg.github.io/wp-content/uploads/2012/12/join_5.png)Resultado Right Join

</div>No exemplo acima, todos os pedidos que tiverem relação com algum vendedor, ou seja, pedidos onde o vendedor\_id seja igual ao id do vendedor, serão selecionados. Também serão selecionados todos os vendedores, independente se tiverem ou não relação com algum pedido.

### CROSS JOIN

Cross join (junção cruzada) é o tipo de junção em que para cada registro da primeira tabela, todos os registros da segunda tabela serão relacionados, ou seja, todos os registros da primeira tabelas são consultados e é feito um produto cartesiano dos registros da primeira tabela com os registros da segunda tabela.

> SELECT pedidos.\*, vendedores.\* FROM pedidos CROSS JOIN vendedores

<div class="wp-caption aligncenter" id="attachment_354" style="width: 408px">[![Resultado Cross Join](http://angelitomg.github.io/wp-content/uploads/2012/12/join_6.png "join_6")](http://angelitomg.github.io/wp-content/uploads/2012/12/join_6.png)Resultado Cross Join

</div>Assim, todos os registros da primeira tabela, serão relacionados com os registros da segunda tabela.

Até a próxima 😉
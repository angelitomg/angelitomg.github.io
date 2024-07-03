---
id: 1001
title: 'Criando views no MySQL'
date: '2015-08-10T15:54:17-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1001'
permalink: /criando-views-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
    - views
---

A criação de views é um recurso presente na maioria dos SGBDs. Views são parecidas com tabelas virtuais, ou seja, encapsulamos uma consulta complexa em uma view e após isto consultamos nossa view como se esta fosse uma tabela.

Um exemplo de criação de view seria:

`CREATE VIEW view_teste AS SELECT * FROM produtos`

No exemplo acima, criamos uma view que consulta os dados da tabela **produtos**. Para consultar os dados de nossa view, poderíamos utilizar o comando:

`SELECT * FROM view_teste`

Para alterar uma view já existente, podemos utilizar o comando **ALTER VIEW** ou também o comando **CREATE OR REPLACE VIEW.**

Exemplo de alteração de uma view utilizando o comando **ALTER VIEW**:

`ALTER VIEW view_teste AS SELECT * FROM produtos WHERE estoque > 5`

No exemplo acima, alteramos nossa view e consultamos apenas os produtos cuja quantidade em estoque seja maior que 5. É importante ressaltar que a **view\_teste** deve ter sido previamente criada.

Para alterar a view utilizando o comando **CREATE OR REPLACE VIEW**, utilizamos o seguinte comando:

`CREATE OR REPLACE VIEW view_teste AS SELECT id, nome FROM produtos`

No exemplo acima, alteramos a view **view\_teste**. Caso ela já existe, será substituída. Caso não exista, será criada.

Por fim, para excluir uma view, utilizamos o comando **DROP VIEW**:

`DROP VIEW view_teste`

Para visualizar as views criadas, basta utilizar o comando **SHOW TABLES**, já que views nada mais são do que “tabelas virtuais”.

Até a próxima. 😉
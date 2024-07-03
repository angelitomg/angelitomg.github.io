---
id: 241
title: 'Paginando resultados no MySQL'
date: '2012-04-23T12:50:46-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=241'
permalink: /paginando-resultados-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
    - paginacao
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/04/mysql-logo.png "mysql-logo")](http://angelitomg.com/blog/wp-content/uploads/2012/04/mysql-logo.png)Em muitos casos, possuimos uma quantidade gigantesca de dados porém gostaríamos de exibir os resultados para o usuário de uma forma mais organizada, dividindo os dados em pequenas porções, para que a navegação e a visualização se torne mais agradável. Isto é feito através da paginação.

No MySQL podemos paginar resultados basicamente através de dois comandos: o comando LIMIT e o comando OFFSET. Nos dois casos, precisamos informar a partir de qual registro os resultados serão exibidos.

Vamos a um exemplo utilizando somente o comando LIMIT:

> SELECT \* FROM clientes LIMIT 10, 30

No comando acima, informamos que desejamos selecionar 30 clientes, exibindo apenas os registros a partir do registro 10.

Vamos a um exemplo utilizando o comando LIMIT em conjunto com o comando OFFSET:

> SELECT \* FROM clientes LIMIT 30 OFFSET 5

Já no exemplo acima, informamos que desejamos exibir 30 registros, dizemos isto ao MySQL através do comando LIMIT, e informamos que desejamos começar a partir do registro 5, informamos isto através do comando OFFSET.

Portanto, não há diferenças em utilizar o comando LIMIT ou o comando OFFSET, pois o MySQL inclui o comando OFFSET como uma forma de manter a compatibilidade com outros SGBDs como o PostgreSQL por exemplo.

Até a próxima 😉
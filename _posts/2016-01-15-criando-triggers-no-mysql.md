---
id: 1141
title: 'Criando Triggers no MySQL'
date: '2016-01-15T06:13:55-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1141'
permalink: /criando-triggers-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
    - triggers
---

Triggers ou gatilhos é um recurso bastante interessante presente na maioria dos SGBDs pois permite que comandos SQL sejam executados antes ou depois de operações como **INSERT**, **UPDATE** e **DELETE**.

No exemplo de hoje, vamos imaginar que possuímos uma tabela chamada **registros**, cujos campos serão: **id**, **nome**, **alteracoes**.

O campo **alteracoes** irá conter o número de edições que o registro sofreu, ou seja, será incrementado a cada **UPDATE**. Para criar um gatilho que faça a atualização do campo **alteracoes** será necessário executar o seguinte comando:

`DELIMITER #` 

`CREATE TRIGGER ```registros.atualizar_alteracoes``` BEFORE UPDATE ON registros`

`FOR EACH ROW BEGIN` 

`SET NEW.alteracoes = NEW.alteracoes + 1;` 

`END#` 

No comando acima, estamos informando que antes (**BEFORE**) de cada **UPDATE** na tabela **registros** o campo **alteracoes** deverá ser incrementado. Também seria possível definir que o gatilho fosse executado após o comando SQL, para isto, seria necessário utilizar a palavra **AFTER** ao invés de **BEFORE**.

Agora é só realizar alguns **UPDATES** e ver o campo **alteracoes** ser incrementado. Para mais detalhes sobre o uso de gatilhos, consulte a [documentação oficial do MySQL sobre triggers](https://dev.mysql.com/doc/refman/5.5/en/trigger-syntax.html).

Para excluir um gatilho, utilize:

`DROP TRIGGER `registros.atualizar_alteracoes``

Até a próxima 😉
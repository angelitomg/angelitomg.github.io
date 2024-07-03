---
id: 1121
title: 'Excluindo registros duplicados no MySQL'
date: '2016-01-13T08:00:38-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1121'
permalink: /excluindo-registros-duplicados-no-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - 'banco de dados'
    - mysql
---

Vamos supor que você possua uma tabela e por algum motivo os registros da tabela foram duplicados. Agora imagine que são milhares de registros e que você não pode ficar procurando os registros repetidos um a um.

Para isto, temos um comando SQL mágico, que irá remover os registros duplicados, mantendo apenas uma cópia de cada.

No nosso exemplo, vamos utilizar a tabela **clientes**, que possui os campos: **id**, **nome**, **email**, **nascimento**.

E o comando SQL ficaria assim:

`DELETE t1 FROM clientes t1, clientes t2 WHERE t1.id < t2.id AND t1.nome = t2.nome AND t1.email = t2.email AND t1.nascimento = t2.nascimento`

No comando acima, estamos verificando os registros que possuem o mesmo **nome**, **email** e **nascimento**. Todos os registros duplicados serão excluídos, exceto um, que por convenção, será o que possui o campo ID com número maior. Caso fosse necessário manter o registro com o menor ID, bastaria substituir o sinal de **&lt;** por **&gt;**.

Lembre-se: antes de executar qualquer comando, execute-o em uma base de dados de testes. Isso irá evitar de dores de cabeça.

Até a próxima 😉
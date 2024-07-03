---
id: 45
title: 'Backup de todas as bases de dados do MySQL'
date: '2012-01-23T20:21:02-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=45'
permalink: /backup-de-todas-as-bases-de-dados-do-mysql/
categories:
    - 'Banco de Dados'
    - Linux/Unix
    - Scripts
    - 'Shell Script'
    - Sysadmin
tags:
    - backup
    - linux
    - mysql
---

Eai galera, apresento-lhes um script simples para realização do backup de todas as bases de dados do MySQL de um servidor Linux/Unix. O script cria um arquivo com o nome e a data do backup no formato “backup\_23012012.sql” contendo o dump de todas as bases de dados do servidor.

> \#!/bin/bash  
> \#Angelito M. Goulart – Setembro/2009  
> \#backup de todas as bases de dados do MySQL  
> mysqldump -u root -p12345 –all-databases &gt; /home/angelito/backup\_$(date +%d%m%Y).sql

Para configurá-lo basta alterar o local do backup, o usuario e a senha do usuário do MySQL.

Você pode baixar o arquivo [AQUI](https://angelitomg.com/downloads/backup_mysql.zip).

Até a próxima 😉
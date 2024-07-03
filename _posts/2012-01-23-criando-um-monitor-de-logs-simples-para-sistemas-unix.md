---
id: 7
title: 'Criando um monitor de logs em apenas uma linha'
date: '2012-01-23T15:08:26-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=7'
permalink: /criando-um-monitor-de-logs-simples-para-sistemas-unix/
categories:
    - Linux/Unix
    - Programação
    - Scripts
    - 'Shell Script'
tags:
    - linux
    - programação
---

Neste pequeno texto vamos criar um monitor de logs com apenas uma linha para ser utilizado em sistemas Linux/Unix.

Basicamente utilizaremos dois comandos:

**watch**: comando responsavel por executar um determinado comando com um intervalo de tempo de 2 segundos.

**tail**: comando que permite visualizar o final de um arquivo (útil na hora de visualizar arquivos de log)

Vamos ao nosso codigo:

> \#!/bin/bash
> 
> \#######################  
> \# SimpleLog v1.0  
> \# Angelito M. Goulart  
> \#######################
> 
> watch tail -n 20 $1

Explicando o código:

Executamos o comando watch, para executar o comando tail de 2 em 2 segundos, mostrando as últimas 20 linhas do arquivo passado como parâmetro ($1).

Após isto basta dar permissão de execução ao scrit (chmod +x monitor.sh) e executar:

> \# ./monitor.sh /var/log/httpd/access\_log

Para terminar a execução do script, basta pressionar CTRL + C.

Você também pode fazer o download do script [AQUI](https://angelitomg.github.io/downloads/monitor.zip).

Até a próxima 😉
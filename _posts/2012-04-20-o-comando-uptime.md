---
id: 235
title: 'O comando uptime'
date: '2012-04-20T12:56:38-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=235'
permalink: /o-comando-uptime/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - 'comandos unix'
    - uptime
---

O comando uptime, é um comando disponível na maioria dos sistemas \*nix que serve para monitorar o tempo que a máquina está ligada e também a carga de trabalho dos últimos minutos.

Para utilizá-lo basta abrir o terminal e digitar:

> uptime

A resposta será:

> 09:45:38 up 64 days, 21:10, 1 user, load average: 0.16, 0.16, 0.12

Isto quer dizer que o computador está ligado há 64 dias, 21 horas e 10 minutos. Tem apenas um usuário conectado e sua carga de trabalho no último minuto foi de 0.16, nos últimos 5 minutos foi de 0.16 e nos últimos 15 minutos foi de 0.12. Isto é muito útil para verificar possíveis gargalos de processamento, baseando-se no valor da carga de trabalho dos últimos minutos.

O comando uptime tem apenas um parâmetro, utilizado para mostrar a versão do comando:

> uptime -V

Até a próxima 😉
---
id: 1049
title: 'Descobrindo a data de instalação do Windows'
date: '2015-11-17T14:09:32-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1049'
permalink: /descobrindo-a-data-de-instalacao-do-windows/
categories:
    - Sysadmin
    - Windows
tags:
    - systeminfo
    - windows
---

O Windows possui um utilitário de linha de comando bastante informativo, chamado **systeminfo**. Através dele é possível obter diversas informações a respeito do computador que está o executando. Podemos descobrir inclusive a data de instalação do sistema.

Para isto, abra o prompt de comando e digite o seguinte comando:

`systeminfo | more`

O comando acima exibirá MUITAS informações sobre o computador, por este motivo, utilizamos o comando **| more**, que irá mostrar o resultado do comando conforme o usuário for pressionando enter. A data de instalação encontra-se na linha “**Data da instalação original:**”

[![systeminfo](http://angelitomg.github.io/wp-content/uploads/2015/11/systeminfo.png)](http://angelitomg.github.io/wp-content/uploads/2015/11/systeminfo.png)

Até a próxima 😉
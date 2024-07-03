---
id: 750
title: 'Executando comandos periodamente no terminal'
date: '2014-01-16T13:42:59-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=750'
permalink: /executando-comandos-periodamente-no-terminal/
categories:
    - Linux/Unix
    - 'Shell Script'
    - Sysadmin
tags:
    - terminal
    - watch
---

Quase todo mundo que utiliza a linha de comando dos sitemas \*nix um dia já precisou ficar executando um comando periodicamente no terminal.

O que nos salva nestas horas é o comando **watch**, que permite que um comando seja executado periodicamente baseado em um intervalo de tempo. Sua sintaxe é muito simples, basta executar:

`watch -n 2 date`

O comando acima irá executar o comando **date** a cada dois segundo. Para alterar o intervalo, substitua o **2** pelo número de segundos desejado.

Simples assim! Até a próxima 😉
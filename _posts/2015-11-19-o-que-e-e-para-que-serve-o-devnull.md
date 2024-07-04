---
id: 1066
title: 'O que é e para que serve o /dev/null'
date: '2015-11-19T13:26:51-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1066'
permalink: /o-que-e-e-para-que-serve-o-devnull/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - dev
    - 'null'
---

O **/dev/null** é um dispositivo (em forma de arquivo) presente em sistemas Unix que descarta toda informação que chega até ele. Ele funciona como uma espécie de lixeira.

Vamos a um exemplo prático:

`#!/bin/bash`
`if ls -l dir1/* &> /dev/null then`
`echo "Existem arquivos."`
`else`
`echo "Não existem arquivos."`
`fi`

O script acima verifica através do comando **ls -l dir1/\*** se existe algum arquivo no diretório **dir1**. Se o script fosse executado sem a instrução **&amp;&gt; /dev/null** a saída do comando **ls** seria exibida na tela.

Como desejamos exibir para o usuário apenas uma mensagem personalizada, descartamos toda saída do comando **ls** através do **/dev/null**.

Até a próxima 😉
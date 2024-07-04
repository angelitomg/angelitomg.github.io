---
id: 1068
title: 'Pra que serve o #! no início dos scripts'
date: '2015-11-18T16:49:45-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1068'
permalink: /pra-que-serve-o-no-inicio-dos-scripts/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - shebang
---

Se você já viu algum script de linha de comando no mundo \*nix, provavelmente já se deparou com a combinação de um sustenido e um ponto de exclamação no início do script. Algo parecido com isso:

`#!/bin/bash` 

`echo "Alo Mundo!"`

Esta combinação de caracteres chama-se **shebang** e sua utilidade é informar ao sistema qual interpretador deve ser utilizado para executar o script.

No exemplo acima, estamos dizendo que o Bash deve executar o script a seguir.

Até a próxima 😉
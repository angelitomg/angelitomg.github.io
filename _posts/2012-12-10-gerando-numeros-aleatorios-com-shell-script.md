---
id: 343
title: 'Gerando números aleatórios com Shell Script'
date: '2012-12-10T18:42:30-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=343'
permalink: /gerando-numeros-aleatorios-com-shell-script/
categories:
    - Linux/Unix
    - Programação
    - 'Shell Script'
tags:
    - 'números aleatórios'
    - programação
    - 'shell script'
---

Quanto estamos na linha de comando dos sistemas \*nix, temos uma variável que contém um valor aleatório entre 0 e 32767. Para obter o número atual basta imprimir o conteúdo da variável:

> echo $RANDOM

Para gerar um número entre uma determinada faixa, basta obter o resto da divisão do número aleatório pelo número desejado, como em:

> echo $(($RANDOM % 10))

O comando acima irá gerar um número aleatório entre 0 e 9. Se for necessário gerar um número entre 1 e 10 por exemplo, basta adicionar 1 ao resultado:

> echo $((($RANDOM %10) + 1))

Até a próxima 😉
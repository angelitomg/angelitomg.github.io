---
id: 1008
title: 'Removendo a quebra de linha do Windows no VIM'
date: '2015-08-18T17:23:17-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1008'
permalink: /removendo-a-quebra-de-linha-do-windows-no-vim/
categories:
    - Linux/Unix
    - VIM
    - Windows
tags:
    - vim
---

Os sistemas \*nix, utilizam apenas um caractere para definir a quebra de linha de um arquivo de texto, o caractere **\\n**. Já sistemas Windows, utilizam dois caracteres: **\\r** e **\\n**.

Algumas vezes, quando abrimos um arquivo criado no Windows no VIM, as quebras de linha parecem estar incorretas e os caracteres **\\r**, referentes a quebra de linha, aparecem como **^M** no arquivo.

Para solucionar este problema, basta utilizar um comando mágico no VIM:

`:%s/^M//g`

Para escrever o caractere **^M**, basta pressionar as teclas **Ctrl+V** e **Ctrl+M**.

O comando acima, simplesmente remove todos os caracteres **\\r** do arquivo, corrigindo assim os problemas relacionados a quebra de linha.

Até a próxima 😉
---
id: 752
title: 'Exibindo o número de linhas no VIM'
date: '2014-07-08T10:43:54-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=752'
permalink: /exibindo-o-numero-de-linhas-no-vim/
categories:
    - VIM
tags:
    - vim
---

O editor VIM, assim como todo bom editor de código, possui um recurso que permite exibir a numeração de linhas dos arquivos. Geralmente, este recurso não vem habilitado por padrão. Para habilitá-lo, basta entrar no modo de comandos (pressionando ESC) e digitar:

`set number`

E para desativar a numeração de linhas, basta digitar:

`set nonumber`

Você também pode adicionar estas linhas ao seu arquivo **.vimrc**, que por padrão, nos sistemas \*nix, fica na pasta pessoal do seu usuário.

Até a próxima 😉
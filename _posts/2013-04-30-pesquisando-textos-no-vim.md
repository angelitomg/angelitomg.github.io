---
id: 684
title: 'Pesquisando textos no VIM'
date: '2013-04-30T15:34:22-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=684'
permalink: /pesquisando-textos-no-vim/
categories:
    - 'Expressões Regulares'
    - VIM
tags:
    - regex
    - vim
---

[![vim_editor](http://angelitomg.com/blog/wp-content/uploads/2013/04/vim_editor.gif)](http://angelitomg.com/blog/wp-content/uploads/2013/04/vim_editor.gif)Pesquisar um texto em um documento no VIM é algo bastante fácil. Para isto, basta pressionar **ESC** (para entrar no modo de comandos) e então digitar:

`/texto a ser buscado`

Onde ‘**texto a ser buscado**‘ deve ser substituído pelo texto a qual deseja buscar. Após digitar isto, pressione **enter** para que a busca seja realizada. Para ir para a próxima ocorrência do texto pesquisado, pressione a tecla **n**.

Um outro recurso importante é a possibilidade de utilizar expressões regulares na busca dos textos. Para obter informações sobre as expressões regulares suportadas, entre no modo de comandos (pressionando **ESC**) e digite:

`:help regexp`

Até a próxima 😉
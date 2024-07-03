---
id: 849
title: 'Dividindo a tela no VIM'
date: '2014-10-16T10:48:03-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=849'
permalink: /dividindo-a-tela-no-vim/
categories:
    - VIM
tags:
    - 'dividir tela'
    - split
    - vim
---

Assim como todo bom editor de código, o VIM possui o recurso de dividir a janela, fazendo com que seja possível abrir diversos arquivos na mesma tela. O VIM possui basicamente dois modos de divisão de janelas: **horizontal** e **vertical**.

Para dividir a janela, entre no modo de comandos (pressione a tecla **ESC** para entrar no modo de comandos) e digite **:split**. Digitando apenas **:split**, o VIM irá dividir a janela horizontalmente e irá abrir uma cópia do arquivo atual na outra janela.

Para dividir a janela verticalmente, ao invés de digitar **:split**, digite **:vsplit**. Você também pode passar como parâmetro o arquivo que deseja abrir, por exemplo:

`:vsplit teste.txt`

E para alternar entre as janelas abertas, basta pressionar **CTRL W** duas vezes.

![Captura de tela de 2014-10-16 10:46:20](http://angelitomg.com/blog/wp-content/uploads/2014/10/Captura-de-tela-de-2014-10-16-104620.png)

Até a próxima 😉
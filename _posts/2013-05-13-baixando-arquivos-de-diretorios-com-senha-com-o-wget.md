---
id: 693
title: 'Baixando arquivos de diretórios com senha com o wget'
date: '2013-05-13T16:43:35-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=693'
permalink: /baixando-arquivos-de-diretorios-com-senha-com-o-wget/
categories:
    - Linux/Unix
    - 'Shell Script'
tags:
    - 'autenticacao http'
    - wget
---

O **wget** é um utilitário de linha de comando muito utilizado nos sistemas \*nix para o download de arquivos. Porém certas vezes precisamos baixar arquivos de diretórios que são protegidos com autenticação via HTTP. Para isto, basta utilizar os parâmetros **–user** e **–password**. Por exemplo:

`wget --user=usuario --password=123456 http://teste.com/teste/arquivo.txt`

No exemplo acima baixamos o arquivo **arquivo.txt**, do local **http://teste.com/teste/arquivo.txt** utilizando como credenciais o usuário **usuario** com a senha **123456**.

Até a próxima 😉
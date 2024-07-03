---
id: 655
title: 'Script para remover arquivos .DS_Store'
date: '2013-04-03T16:45:57-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=655'
permalink: /script-para-remover-arquivos-ds_store/
categories:
    - Mac
    - Programação
    - Python
    - Scripts
tags:
    - .ds_store
    - mac
    - python
---

Os arquivos **.DS\_Store** são arquivos criados pelos sistemas Mac OS para armazenar informações sobre o diretório em que este arquivo se encontra que serão utilizadas pelo Finder (gerenciador de arquivos dos sistemas Mac). Porém este arquivo não tem muita utilidade em outros sistemas. É para isto que o script **delete-dssstore.py** serve. Ele simplesmente deleta recursivamente os arquivos **.DS\_Store** de uma pasta.

Seu uso é muito simples, basta chamar o arquivo via linha de comando e passar o diretório desejado como parâmetro:

`python delete-dsstore.py /Users/angelito`

Pronto, o script irá deletar recursivamente todos os arquivos **.DS\_Store** que encontrar neste diretório.

O script pode ser baixado [AQUI](https://angelitomg.github.io/downloads/delete-dsstore.zip). Se quiser contribuir, acesse o [repositório](https://github.com/angelitomg/delete-dsstore) no [GitHub](https://github.com/).

Até a próxima 😉
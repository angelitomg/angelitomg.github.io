---
id: 450
title: 'Alterando os servidores DNS nos sistemas Linux/Unix'
date: '2012-12-18T19:43:23-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=450'
permalink: /alterando-os-servidores-dns-nos-sistemas-linuxunix/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - dns
    - linux
    - unix
---

Nos sistemas Linux/Unix o arquivo que contém os endereços dos servidores DNS utilizados pelo sistema fica em **/etc/resolv.conf**. Para alterar ou adicionar novos servidores, basta editar o arquivo e adicionar os servidores desejados precedidos da palavra **nameserver**, por exemplo:

` nameserver 8.8.4.4`

`nameserver 8.8.4.4`

Lembre-se, o arquivo deve ser alterado com privilégios de administrador.

Até a próxima 😉
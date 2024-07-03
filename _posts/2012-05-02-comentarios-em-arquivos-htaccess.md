---
id: 251
title: 'Comentários em arquivos .htaccess'
date: '2012-05-02T12:48:48-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=251'
permalink: /comentarios-em-arquivos-htaccess/
categories:
    - Sysadmin
tags:
    - apache
---

[![](http://angelitomg.github.io/wp-content/uploads/2012/01/apache-logo.jpg "apache-logo")](http://angelitomg.github.io/wp-content/uploads/2012/01/apache-logo.jpg)Arquivos .htaccess são arquivos utilizados pelo Apache, onde por meio destes, é possível aplicar determinadas configurações ao diretório em que ele se encontra, permitindo personalizar opções do servidor para cada diretório. Porém em muitos casos, o arquivo fica longo e a chance de se perder ou esquecer para que uma determinada linha serve, é grande. Uma forma de resolver isto é adicionar comentários nas seções do arquivo, facilitando assim a manutenção do arquivo.

Para adicionar um comentário, basta adicionar o sustenido “#” ao ínicio da linha que se deseja comentar. Exemplo:

> \# Desabilitando a listagem de arquivos do diretório
> 
> Options -Indexes

Pronto, desabilitamos a listagem de arquivos do diretório atual e adicionamos um comentário na linha acima.

Até a próxima 😉
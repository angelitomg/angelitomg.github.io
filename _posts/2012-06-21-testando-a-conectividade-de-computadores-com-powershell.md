---
id: 301
title: 'Testando a conectividade de computadores com PowerShell'
date: '2012-06-21T12:55:14-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=301'
permalink: /testando-a-conectividade-de-computadores-com-powershell/
categories:
    - Powershell
    - Programação
    - Scripts
    - Sysadmin
    - Windows
tags:
    - powershell
    - programação
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/06/powershell.png "powershell")](http://angelitomg.com/blog/wp-content/uploads/2012/06/powershell.png)Muitas vezes precisamos verificar se um conjunto de computadores está acessível. Neste post estou disponibilizando um script simples feito com PowerShell que verifica a conectividade de uma lista de computadores definidos em um array.

O teste é realizado através do cmdlet Test-Connection. No final da execução é mostrada uma mensagem exibindo quais computadores estavam acessíveis e quais não puderam ser acessados.

O script pode ser baixado [AQUI](https://angelitomg.com/downloads/teste_conexao.ps1).

Até a próxima 😉
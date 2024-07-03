---
id: 20
title: 'Filtrando strings maliciosas em ASP'
date: '2012-01-23T19:24:06-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=20'
permalink: /filtrando-strings-maliciosas-em-asp/
categories:
    - ASP
    - Programação
    - Scripts
tags:
    - asp
    - programação
    - segurança
    - 'sql injection'
    - xss
---

Apresento aqui uma função para filtrar strings contra os principais caracteres utilizados nos ataques de SQL Injection e XSS. A função é bem simples, porém ajuda bastante na hora de receber dados do usuário.

> Public Function filtrarTexto(str)  
> str = Replace(str, ” str = Replace(str, “;”, “”)  
> str = Replace(str, “#”, “”)  
> str = Replace(str, “–“, “”)  
> str = Replace(str, “%”, “”)  
> str = Replace(str, “=”, “”)  
> str = Replace(str, “‘”, “”)  
> str = Replace(str, “+”, “”)  
> filtrarTexto = str  
> End Function

Você pode baixar o arquivo [AQUI](https://angelitomg.com/downloads/filtrarTexto.zip).

Até a próxima 😉
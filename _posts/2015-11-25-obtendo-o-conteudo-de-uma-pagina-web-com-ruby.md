---
id: 1078
title: 'Obtendo o conteúdo de uma página web com Ruby'
date: '2015-11-25T10:45:39-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1078'
permalink: /obtendo-o-conteudo-de-uma-pagina-web-com-ruby/
categories:
    - Programação
    - Ruby
tags:
    - ruby
---

Uma tarefa simples e apenas 2 linhas de código:

`require 'open-uri'` 

`print open("http://www.angelitomg.com").read` 

Com o código acima, você obtém e exibe o conteúdo da página **<http://www.angelitomg.com>** na tela. Funciona tanto em HTTP quanto em HTTPS. Simples assim!

Até a próxima 😉
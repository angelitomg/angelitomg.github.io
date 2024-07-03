---
id: 289
title: 'Copiando strings em linguagem C'
date: '2012-06-06T00:38:14-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=289'
permalink: /copiando-strings-em-linguagem-c/
categories:
    - 'Linguagem C'
    - Programação
tags:
    - 'linguagem c'
    - programação
    - strings
---

[![](http://angelitomg.github.io/wp-content/uploads/2012/06/cubo-do-C.jpg "cubo-do-C")](http://angelitomg.github.io/wp-content/uploads/2012/06/cubo-do-C.jpg)A linguagem C, por padrão não possui o tipo de dados string. Strings nada mais são do que vetores de caracteres onde o caractere que delimita o fim da string é **‘\\0’**.

Para uma manipulação mais sofisticada é necessário utilizar a biblioteca **string.h**, que implementa o tipo de dados string e contém funções úteis para sua manipualção.

Para copiar strings, não basta apenas usar o operador de atribuição, como em:

> nome = novo\_nome;

Como a linguagem C não implementa o tipo string, devemos utilizar a função **strcpy()** da biblioteca **string.h**. Sua sintaxe é a seguinte:

> strcpy(string\_destino, string\_origem);

Onde **string\_destino** é a string que irá receber o conteúdo de **string\_origem**. Um exemplo completo pode ser baixado [AQUI](https://angelitomg.github.io/downloads/copiar_string.c).

Até a próxima 😉
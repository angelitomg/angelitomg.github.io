---
id: 556
title: 'Utilizando a função memcpy() em C'
date: '2012-12-27T18:27:22-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=556'
permalink: /utilizando-a-funcao-memcpy-em-c/
categories:
    - 'Linguagem C'
    - Programação
    - Scripts
tags:
    - 'linguagem c'
    - memcpy
    - programação
---

A função **memcpy()** é uma função presente na biblioteca **string.h** cuja finalidade é copiar blocos de memória. Ela recebe 3 parâmetros: **destino**, **origem** e número de bytes a serem copiados**.

Vamos supor que queremos copiar o conteúdo de dois arrays de tamanhos iguais: **a\[10\]** e **b\[10\]**. Vamos copiar os dados de **a** para **b** (supondo que os arrays ja estejam declarados):

`memcpy(b, a, sizeof(b));`

No exemplo acima copiamos todo o conteúdo de **a** para **b**. Simples assim!

Um exemplo completo pode ser baixado [AQUI](https://angelitomg.com/downloads/memcpy.c).

Até a próxima 😉
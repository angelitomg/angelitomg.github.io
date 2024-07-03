---
id: 198
title: 'Busca binária em linguagem C'
date: '2012-04-02T17:08:36-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=198'
permalink: /busca-binaria-em-linguagem-c/
categories:
    - 'Linguagem C'
    - Programação
tags:
    - 'busca binária'
    - 'linguagem c'
---

A busca binária é um tipo de busca realizada em vetores ordenados, a qual se baseia no método de divisões sucessivas do vetor, até que o valor desejado seja encontrado.

A busca binária funciona da seguinte forma:

Imagenemos o seguinte vetor:

> v = {1, 3, 5, 6, 9, 12, 15, 20, 25}

O valor que queremos encontrar é 20. Vamos então começar as pesquisas.

O primeiro passo é verificar se elemento que desejamos buscar é igual, menor ou maior que o elemento do meio do vetor. Se este valor for igual, então encontramos nosso elemento. Caso o valor seja menor, descartamos todo o resto do vetor que seja maior que este valor e vamos então realizar as buscas somente na metade “menor” do vetor. Caso o valor que desejamos buscar seja maior que o valor do elemento do meio, realizaremos então o mesmo processo, porém desta vez vamos realizar as buscas somente na metade “maior” do vetor, ou seja, a partir do elemento do meio.

Este processo é realizado sucessivamente até que o valor seja encontrado.

Vamos realizar as buscas no vetor acima:

Valor do elemento do meio: **9**

Valor que desejamos buscar: **20**

Descartamos todo o resto do vetor que seja menor ou igual a 9 e continuamos as buscas, a partir do 9.

Vetor: **12, 15, 20, 25**

Valor do elemento do meio: **15**

Valor que desejamos buscar: **20**

Descartamos novamente a metade menor do vetor e continuamos as buscas:

Vetor: **20, 25**

Elemento do meio: **20**. Achamos o que procuravamos!

Veja que em apenas 3 passos, achamos o elemento que estavamos procurando. Em uma busca sequencial, teríamos que realizar 8 passos. Imagine isto aplicado a um vetor de 10.000.000 elementos! Hehehe

Estou postando um codigo fonte de exemplo em C de busca binária. O código pode ser baixado [AQUI](https://angelitomg.com/downloads/busca_binaria.c).

Até a próxima 😉
---
id: 475
title: 'Calculando a diferença entre datas com PHP'
date: '2012-12-19T17:03:24-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=475'
permalink: /calculando-a-diferenca-entre-datas-com-php/
categories:
    - PHP
    - Programação
    - Scripts
tags:
    - data
    - 'diferença entre datas'
    - php
    - programação
---

Neste post vou mostrar a vocês como calcular a diferença entre duas datas com PHP.

Primeiro, vamos criar os objetos da classe **DateTime** referente as datas que desejamos calcular. A classe **DateTime** é uma classe do PHP que fornece recursos para facilitar a escrita, cálculos e conversões entre datas.

`$data_inicial = \DateTime::createFromFormat('Y-m-d', '2012-12-19');`

`$data_final = \DateTime::createFromFormat('Y-m-d', '2012-12-31');`

Após isto, iremos chamar o método **diff** que irá nos retornar a diferença entre as datas.

`$diferenca = $data_final->diff($data_inicial);`

Para exibir a diferença, basta usar o método **format**.

`echo 'Diferenca em dias  -> ' . $diferenca->format("%a dias!");`

O script completo pode ser baixado [AQUI](https://angelitomg.com/downloads/diferenca_datas_php.zip).

Até a próxima 😉
---
id: 388
title: 'A Hora UNIX'
date: '2012-12-14T14:21:41-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=388'
permalink: /a-hora-unix/
categories:
    - Linux/Unix
tags:
    - 'hora unix'
    - unix
---

[![hora unix](http://angelitomg.com/blog/wp-content/uploads/2012/12/Unix-time-passed-1000000000-seconds1.jpg)](http://angelitomg.com/blog/wp-content/uploads/2012/12/Unix-time-passed-1000000000-seconds1.jpg)A hora UNIX é um relógio que marca a quantidade de segundos passados desde 1º de Janeiro de 1970 (UTC) até o momento atual. Foi criado com o objetivo de facilitar o cálculo de datas entre computadores, visto que o cálculo de datas feito através do formato ‘humano’ é difícil para um computador.

Na maioria das linguagens de programação existem funções para que seja possível obter a hora UNIX atual ou converter uma data para este formato.

Porém há um problema, visto que a hora UNIX é geralmente armazenada em uma variável do tipo signed int32, cujo valor suportado é 0 até 4294967296, portando há previsões que em 2038 ocorra uma espécie de bug do milênio na hora UNIX. A solução para isto é armazenar a hora UNIX em uma variável do tipo unsigned int64 e ficar livre de dores de cabeça por cerca de 290 bilhões de anos. 😛

Para saber a hora UNIX atual, fazer conversões e descobrir como obter a hora UNIX na sua linguagem de programação favorita, você pode acessar o [Epoch Converter](http://www.epochconverter.com/). Enquanto escrevo este post a hora UNIX é **1355486537**.

(Obrigado [Wikipédia](http://pt.wikipedia.org/wiki/Era_Unix))

Até a próxima 😉
---
id: 88
title: 'Manipulando campos sim/não no Access'
date: '2012-01-31T14:25:26-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=88'
permalink: /manipulando-campos-simnao-no-access/
categories:
    - ASP
    - 'Banco de Dados'
    - Windows
tags:
    - access
---

O Access possui um recurso muito interessante, que é a possibilidade de utilizar campos sim/não, ou seja, campos que armazenam apenas dois valores (VERDADEIRO, FALSO), facilitando em muitos casos, a vida do programador.

Manipular estes campos é uma tarefa muito fácil, já que o Access utiliza a seguinte convenção:

**-1 -&gt; Sim**

 **0 -&gt; Não**

Portanto, para inserir um registro no banco de dados, marcado como sim, basta criar um campo do tipo Sim/Não e inserir o valor **-1** neste campo. Se desejar marcá-lo como não, basta inserir o valor 0, simples assim!

Até a próxima 😉
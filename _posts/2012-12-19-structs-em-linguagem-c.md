---
id: 455
title: 'Structs em Linguagem C'
date: '2012-12-19T00:32:47-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=455'
permalink: /structs-em-linguagem-c/
categories:
    - 'Linguagem C'
    - Programação
    - Scripts
tags:
    - 'linguagem c'
    - programação
    - structs
---

Struct é um tipo de dado presente na linguagem C onde através deste tipo, é possível armazenar uma coleção de variáveis. Structs são muito úteis para armazenar variáveis que precisem serem agrupadas, como os dados de um cliente por exemplo.

Quando se cria uma struct, é possível criar diversas variáveis do seu tipo, aproveitando assim a struct criada.

Vamos então criar uma struct chamada **cliente**, onde vamos armazenar os dados de um cliente:

`struct cliente{`

`int codigo;`

`char nome[50];`

`};`

Após ter criado a struct, vamos criar uma variável do tipo **cliente**. Para criar uma variável deste tipo, utilizamos o comando:

`struct cliente cliente1;`

Na linha acima, criamos uma variável chamada **cliente1** que contém uma estrutura do tipo **cliente**. Nesta variável, vamos armazenar os dados de um cliente. Lembrando que podemos agora criar quantas variáveis forem necessários do tipo **cliente**.

Para acessar os dados da variável cliente1, utilizamos o nome da variável, seguido de um ponto, seguido do nome da variável interna da struct, por exemplo:

`printf("%d", cliente1.nome);`

Um script completo contendo um exemplo comentado sobre structs pode ser acessado [AQUI](https://angelitomg.com/downloads/exemplo_struct.c).

Até a próxima 😉
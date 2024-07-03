---
id: 648
title: 'Utilizando o Local Storage do HTML 5'
date: '2013-04-02T15:52:38-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=648'
permalink: /utilizando-o-local-store-do-html-5/
categories:
    - 'HTML 5'
    - JavaScript
    - Programação
    - Scripts
tags:
    - 'HTML 5'
    - javascript
    - 'local storage'
---

[![HTML5_Logo_128](http://angelitomg.github.io/wp-content/uploads/2013/04/HTML5_Logo_128.png)](http://angelitomg.github.io/wp-content/uploads/2013/04/HTML5_Logo_128.png)Neste post vou mostrar pra vocês como utilizar o **Local Storage**, uma característica muito útil e interessante adicionada na versão 5 do HTML.

O **Local Storage** é um recurso que permite armazenar dados no computador do usuário que não são perdidos caso o usuário feche o navegador, através de JavaScript. É algo similar aos cookies, porém com suporte a um maior volume de dados.

A escrita e leitura de dados é feita através de **chave** e **valor** através do objeto **localStorage**. Vamos então gravar um dado no objeto **localStorage**:

`localStorage.nome = 'teste';`

Com o dado gravado, vamos agora ler o seu valor e exibir em um alert:

`alert(localStorage.nome);`

O Local Storage funciona na maioria dos navegadores atuais e a partir das versões 8 do Internet Explorer.

Um exemplo completo pode ser baixado [AQUI](https://angelitomg.github.io/downloads/exemplo-local-storage.zip).

Até a próxima 😉
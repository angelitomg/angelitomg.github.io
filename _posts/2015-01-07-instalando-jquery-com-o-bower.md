---
id: 939
title: 'Instalando jQuery com o Bower'
date: '2015-01-07T10:07:14-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=939'
permalink: /instalando-jquery-com-o-bower/
categories:
    - JavaScript
    - Programação
tags:
    - bower
    - jquery
    - js
---

O [Bower](http://bower.io) é um gerenciador de dependências para pacotes de front-end, digamos, de uma forma bem genérica, que o Bower está para **Js** assim como o [Composer](https://getcomposer.org/) está para **PHP**.

Neste pequeno post, vou mostrar como instalar a biblioteca [jQuery](http://jquery.com/) no seu projeto através dele. Para seguir este tutorial vamos partir da premissa que você já possui o Bower instalado e funcionando.

Para iniciar a instalação, basta criar um diretório para seu projeto, entrar no diretório e executar o comando:

`bower install jquery`

Após isto, o Bower irá instalar todas as dependências necessárias. Ao final, uma pasta **bower\_components** será criada. Lá dentro, estarão os arquivos necessários.

E para incluir a biblioteca jQuery no seu projeto:

`<script src="bower_components/jquery/dist/jquery.min.js"></script>`

Caso uma nova versão da biblioteca seja lançada, basta entrar no diretório do seu projeto e executar:

`bower update`

O Bower irá atualizar automaticamente todas as dependências.

Se quiser ver o que mais o Bower pode fazer por você, entre no [site oficial](http://bower.io/) e veja a documentação.

Até a próxima 😉
---
id: 638
title: 'Exibindo mensagens de erro na administração do Magento'
date: '2013-04-02T15:10:09-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=638'
permalink: /exibindo-mensagens-de-erro-na-administracao-do-magento/
categories:
    - Magento
    - PHP
    - Programação
tags:
    - magento
    - 'mensagens de erro'
---

Quando estamos desenvolvendo um módulo para o Magento, precisamos certas vezes exibir uma mensagem de erro para o usuário. A forma mais fácil de fazer isto é adicionando o erro na sessão. Para isto, basta chamar o seguinte comando no controlador na qual deseja gerar o erro:

`$this->_getSession()->addError('Mensagem de erro!');`

Pronto, após isto sua mensagem de erro já poderá ser exibida no layout da administração do Magento.

[![Captura de tela 2013-04-02 às 11.19.23](http://angelitomg.github.io/wp-content/uploads/2013/04/Captura-de-tela-2013-04-02-às-11.19.23.png)](http://angelitomg.github.io/wp-content/uploads/2013/04/Captura-de-tela-2013-04-02-às-11.19.23.png)

(Este post foi baseado na versão 1.7.0.0 do Magento)

Até a próxima 😉
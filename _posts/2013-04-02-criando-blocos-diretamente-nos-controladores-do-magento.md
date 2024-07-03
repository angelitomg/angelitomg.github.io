---
id: 632
title: 'Criando blocos diretamente nos controladores do Magento'
date: '2013-04-02T15:06:08-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=632'
permalink: /criando-blocos-diretamente-nos-controladores-do-magento/
categories:
    - Magento
    - PHP
    - Programação
tags:
    - blocos
    - magento
---

[![1364931728_Cart_by_Artdesigner.lv](http://angelitomg.com/blog/wp-content/uploads/2013/04/1364931728_Cart_by_Artdesigner.lv_.png)](http://angelitomg.com/blog/wp-content/uploads/2013/04/1364931728_Cart_by_Artdesigner.lv_.png)Criar um bloco no Magento é uma tarefa trabalhosa, sendo que muitas vezes precisamos de algo rápido na qual não vale a pena passar por todo o trabalho de criação de um bloco. Podemos então criar um bloco diretamente no controlador e adicionar HTML nele. Para isto, basta utilizar os seguintes comandos:

`$this->loadLayout();`

`$block = $this->getLayout()`

`->createBlock('core/text', 'test-block')`

`->setText('<h1>Alo Mundo!</h1>');`

`$this->_addContent($block);`

`$this->renderLayout();`

Pronto, nosso bloco está criado e com HTML dentro. Com os comandos acima carregamos o layout, adicionamos o bloco e por fim renderizamos o layout.

(Este post foi baseado na versão 1.7.0.0 do Magento)

Até a próxima 😉
---
id: 660
title: 'Alterando o status de um produto via código no Magento'
date: '2013-04-17T15:19:13-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=660'
permalink: /alterando-o-status-de-um-produto-via-codigo-no-magento/
categories:
    - Magento
    - PHP
    - Programação
tags:
    - magento
    - php
    - programação
---

Neste post vou mostrar a vocês como alterar o habilitar/desabilitar um produto via código no Magento. Vamos supor que você esteja trabalhando em um controller. Vamos aos passos:

Primeiro, precisamos carregar o produto que desejamos alterar o status.

`$product = Mage::getModel('catalog/product')->loadByAttribute('sku', '1234567890');`

Onde **1234567890** é o **SKU** do produto. Após isto, vamos alterar o status do produto:

`$product->setData('status', Mage_Catalog_Model_Product_Status::STATUS_ENABLED);`

Com o status alterado, vamos salvar o produto.

`$product->save();`

No exemplo acima, estamos habilitando um produto. Caso queira desabilitar, basta substituir:

`Mage_Catalog_Model_Product_Status::STATUS_ENABLED`

por

`Mage_Catalog_Model_Product_Status::STATUS_DISABLED`

(Este post foi baseado na versão 1.7 do Magento)

Até a próxima 😉
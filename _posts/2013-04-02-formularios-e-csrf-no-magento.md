---
id: 644
title: 'Formulários e CSRF no Magento'
date: '2013-04-02T15:35:26-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=644'
permalink: /formularios-e-csrf-no-magento/
categories:
    - Magento
    - PHP
    - Programação
    - Segurança
tags:
    - csrf
    - magento
---

[![1364931728_Cart_by_Artdesigner.lv](http://angelitomg.com/blog/wp-content/uploads/2013/04/1364931728_Cart_by_Artdesigner.lv_.png)](http://angelitomg.com/blog/wp-content/uploads/2013/04/1364931728_Cart_by_Artdesigner.lv_.png)O Magento utiliza em seus formulários uma chave que serve de proteção contra ataques do tipo **CSRF**. Portanto se for necessário enviar um formulário para o Magento e este não tiver esta chave atualizada, o formulário não é aceito. Para obter esta chave, utilize o comando no controlador:

`$formKey = Mage::getSingleton('core/session')->getFormKey();`

Após obtida, esta chave deve ser adicionada ao formulário através de um campo do tipo hidden com o nome de **form\_key**:

`$html_campo_hidden = '<input name="form_key" type="hidden" value="' . $formKey . '">';`

Pronto, agora basta adicionar este HTML ao seu formulário e ele já será aceito pelo Magento.

Até a próxima 😉
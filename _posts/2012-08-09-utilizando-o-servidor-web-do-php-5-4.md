---
id: 320
title: 'Utilizando o servidor web do PHP 5.4'
date: '2012-08-09T00:07:47-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=320'
permalink: /utilizando-o-servidor-web-do-php-5-4/
categories:
    - PHP
    - Programação
    - Sysadmin
tags:
    - php
---

A partir da versão 5.4, o PHP trouxe uma novidade. Um servidor web integrado! Ou seja, você pode desenvolver e realizar os testes de seus aplicativos sem a necessidade de instalar o Apache ou outro servidor web.

Para ativá-lo, instale o PHP (lembrando que deve ser a versão 5.4 ou superior) na sua máquina. Abra o terminal ou prompt de comando e entre na pasta do PHP (se você não tiver adicionado o executável do PHP ao seu $PATH). Basta então executar o comando:

> php -S localhost:8000

O servidor estará rodando em localhost, na porta 8000 e seu document root será o diretório atual. Para selecionar um document root diferente, basta utilizar a opção **-t**.

> php -S localhost:8000 -t c:\\web

[![](http://angelitomg.com/blog/wp-content/uploads/2012/08/phpinfo.png "phpinfo")](http://angelitomg.com/blog/wp-content/uploads/2012/08/phpinfo.png)

Pronto, o PHP estará pronto para uso. Para parar o servidor, basta pressionar **ctrl+c** no terminal. **Atenção:** o uso deste servidor é recomendado somente para testes!

Até a próxima 😉
---
id: 82
title: 'Desabilitando a listagem de diretórios no Apache'
date: '2012-01-30T12:16:46-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=82'
permalink: /desabilitando-a-listagem-de-diretorios-no-apache/
categories:
    - Segurança
    - Sysadmin
tags:
    - apache
---

[![](http://angelitomg.github.io/wp-content/uploads/2012/01/apache-logo.jpg "apache-logo")](http://angelitomg.github.io/wp-content/uploads/2012/01/apache-logo.jpg)A listagem de diretórios é um recurso que permite ao visitante, visualizar todo o conteúdo de um determinado diretório do servidor WEB através do browser, se este não conter um arquivo de índice. Este recurso é bom por um lado, porém automaticamente abre brechas, pois acaba expondo todos os arquivos de um determinado diretório para qualquer visitante que chegar ao seu site.

Para corrigir isto, existem duas formas:

**Através do arquivo httpd.conf**: você pode desabilitar a listagem de diretórios do Apache através do arquivo httpd.conf. Para isto, basta procurar a seção &lt;directory&gt; correspondente ao diretório a qual deseja bloquear a listagem ou ainda criar uma seção e adicionar ou editar a seguinte opção:

> &lt;Directory “/var/www/html/teste”&gt;
> 
> Options -Indexes
> 
> &lt;/Directory&gt;

Caso queira ativar e não desativar a listagem de diretórios, substitua a diretiva:

> Options -Indexes

Por:

> Options Indexes

**Através do arquivo .htaccess**: Se você não tiver acesso ao arquivo httpd.conf em seu ambiente de hospedagem, você tambem pode desabilitar a listagem de diretórios através do arquivo .htaccess. Para isto, crie um arquivo .htaccess dentro do diretório a qual deseja bloquear a listagem e adicione a diretiva:

> Options -Indexes

Se desejar ativar a listagem de diretórios, ao invés de adicionar a linha acima, adicione:

> Options Indexes

Simples assim!

Até a proxima 😉
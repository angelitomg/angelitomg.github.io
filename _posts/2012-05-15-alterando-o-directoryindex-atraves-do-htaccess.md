---
id: 275
title: 'Alterando o DirectoryIndex através do .htaccess'
date: '2012-05-15T19:05:06-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=275'
permalink: /alterando-o-directoryindex-atraves-do-htaccess/
categories:
    - Sysadmin
tags:
    - apache
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/01/apache-logo.jpg "apache-logo")](http://angelitomg.com/blog/wp-content/uploads/2012/01/apache-logo.jpg)A diretiva **DirectoryIndex** do Apache é uma diretiva que define o arquivo padrão de um diretório. Ou seja, quando se acessa um determinado diretório sem especificar algum arquivo, o arquivo definido na diretiva DirectoryIndex será chamado.

Se for definido mais de um arquivo e o primeiro arquivo definido não existir, o segundo será chamado e assim, sucessivamente. Isto é muito útil para alterar, por exemplo, a página inicial de um site, ao invés de utilizar os velhos index.php, index.html ou outro index qualquer, podemos utilizar inicio.html, home.php, etc.

Para alterar o arquivo padrão de um diretório basta adicionar a diretiva DirectoryIndex no arquivo .htaccess seguido da lista de arquivos, sendo que os que vierem primeiro terão prioridade sobre os demais. Vamos a um exemplo:

> DirectoryIndex home.php index.html

No caso acima, estou definindo que quando o usuário acessar o diretório que está o arquivo .htaccess, o arquivo home.php será chamado, caso este não exista, será chamado então o arquivo index.html.

Até a próxima 😉
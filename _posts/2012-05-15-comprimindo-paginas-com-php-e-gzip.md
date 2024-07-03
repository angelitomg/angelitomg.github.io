---
id: 255
title: 'Comprimindo páginas com PHP e GZIP'
date: '2012-05-15T13:13:41-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=255'
permalink: /comprimindo-paginas-com-php-e-gzip/
categories:
    - PHP
    - Programação
tags:
    - gzip
    - php
    - programação
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/05/php-gzip.jpg "php-gzip")](http://angelitomg.com/blog/wp-content/uploads/2012/05/php-gzip.jpg)Uma forma de diminuir o consumo de banda e aumentar o desempenho de um site é compactar o conteúdo de suas páginas, de forma que seu tamanho seja reduzido sem que ocorra perda no conteúdo. Isto pode ser feito de diferentes maneiras, neste post, vou mostrar como fazer isto utilizando PHP e Gzip.

Para compactar o conteúdo de suas páginas, basta adicionar a seguinte linha do topo do script. Lembre-se, esta deve ser a **PRIMEIRA** linha do script:

> &lt;?php ob\_start(‘ob\_gzhandler’); ?&gt;

Vamos entender: chamamos a função **ob\_start()** que é responsável por iniciar o buffer de saída e passamos como parâmetro a função **ob\_gzhandler()**, que é uma função especialmente destinada para ser utilziada como função de callback para a função **ob\_start()**. Ela é utilizada para determinar o tipo de compactação que o navegador do cliente aceita.

Após isto, o conteúdo da sua página já será enviado compactado ao cliente. Para realizar um teste, acesse o site <http://www.gidnetwork.com/tools/gzip-test.php> e digite o endereço da sua página.

Até a próxima 😉
---
id: 1390
title: 'Hello World Com Docker e PHP'
date: '2024-07-12T16:20:00-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1390'
permalink: /hello-world-com-docker-e-php/
categories:
    - Docker
    - PHP
tags:
    - docker
    - php
---

Nesse breve texto vou mostrar a vocês como fazer um **Hello World**, ou melhor, um PHP Info utilizando Docker e PHP.

O primeiro passo, após a instalação do Docker é a criação de um arquivo **Dockerfile** com o seguinte conteúdo:

`FROM php:8.2-apache`   
`RUN echo '<?php phpinfo(); ?>' > /var/www/html/phpinfo.php`  
`EXPOSE 80`  

No trecho de código acima estamos informando que desejamos criar uma imagem a partir da **imagem php:8.2-apache**, criamos um arquivo **phpinfo.php** no diretório **/var/www/html/** com o conteúdo **`<?php phpinfo(); ?>`** e por fim dizemos que a porta **80** do nosso container deverá ser exposta.

Após criar o arquivo acima, vamos "construir" nossa imagem chamada php com o comando: 

`docker build -t php .` 

Com a imagem construída é só criar e rodar o container com o comando: 

`docker run -dp 127.0.0.1:80:80 php` 

Pronto, o container já estará rodando e você poderá acessar as informações do PHP acessando http://localhost.

[![](http://angelitomg.github.io/wp-content/uploads/2024/07/Captura-de-tela-2024-07-12-160252.png)](http://angelitomg.github.io/wp-content/uploads/2024/07/Captura-de-tela-2024-07-12-160252.png)

Até a próxima 😉
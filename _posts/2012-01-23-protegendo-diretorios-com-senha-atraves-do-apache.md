---
id: 24
title: 'Protegendo diretórios com senha através do Apache'
date: '2012-01-23T19:22:02-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=24'
permalink: /protegendo-diretorios-com-senha-atraves-do-apache/
categories:
    - Linux/Unix
    - Segurança
    - Sysadmin
tags:
    - apache
---

[![](http://angelitomg.github.io/wp-content/uploads/2012/01/apache-logo.jpg "apache-logo")](http://angelitomg.github.io/wp-content/uploads/2012/01/apache-logo.jpg)O Apache é um dos servidores WEB mais populares do mundo. Isto se deve a sua segurança, estabilidade, licença e também as suas mais diversas funcionalidades.

Dentre elas, temos a possibilidade de proteger um diretório com senha através da criação de um arquivo .htaccess personalizado.

Vamos aos passos:

**1º** Certifique-se de que a opção AllowOverride do arquivo de configuração do apache esteja marcada como AuthConfig ou All.

**2º** Após isto, você deve adicionar um usuário e definir sua senha. Para isto, abra o terminal e digite o seguinte comando:

> htpasswd -c /home/usuario/.htpasswd nome\_usuario

Onde htpasswd é o script responsável por criar o usuário. A opção -c faz com que, se o arquivo nao exista, ele seja criado. Logo após, vem a localizacao do arquivo de senhas, e por fim, o nome de usuário que se deseja criar.

**3º** Feito isto, criaremos um arquivo .htaccess no diretório que desejamos proteger com o seguinte conteúdo:

> AuthName “Acesso Restrito”  
> AuthType Basic  
> AuthUserFile “/home/usuario/.htpasswd”  
> require valid-user

Após isto, basta entrar no diretório e digitar seu nome de usuário e senha.

Até a próxima 😉
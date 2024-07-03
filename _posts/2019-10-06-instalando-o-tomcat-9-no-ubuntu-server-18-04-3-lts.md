---
id: 1291
title: 'Instalando o Tomcat 9 no Ubuntu Server 18.04.3 LTS'
date: '2019-10-06T12:32:42-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1291'
permalink: /instalando-o-tomcat-9-no-ubuntu-server-18-04-3-lts/
categories:
    - Java
    - Sysadmin
tags:
    - java
    - tomcat
---

Buscando na internet informações sobre como instalar o Tomcat 9 no Ubuntu Server me levou sempre a tutoriais onde era necessário baixar e instalar o Tomcat de forma manual.

Porém existe uma forma MUITO mais fácil de fazer este procedimento: nosso velho e querido apt.

Para instalar o Tomcat 9 no Ubuntu Server 18.04.3 LTS, basta exeutar os seguintes comandos:

`sudo apt-get update`

`sudo apt-get upgrade`

`sudo apt-get install default-jdk tomcat9 tomcat9-admin tomcat9-docs tomcat9-examples`

Após isto, reinicie e máquina e acesse o endereço do seu servidor, seguido da porta 8080. No meu caso, o endereço foi 10.0.0.111:8080.

<figure class="wp-block-image">![](http://angelitomg.com/blog/wp-content/uploads/2019/10/Captura-de-Tela-2019-10-06-às-12.32.19.png)</figure>Pronto, o Tomcat está instalado e funcionando! Para configurar os usuários do Tomcat, edite o arquivo **/etc/tomcat9/tomcat-users.xml**.

Até a próxima 😉
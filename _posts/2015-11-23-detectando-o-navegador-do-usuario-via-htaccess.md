---
id: 1072
title: 'Detectando o navegador do usuário via .htaccess'
date: '2015-11-23T08:41:02-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1072'
permalink: /detectando-o-navegador-do-usuario-via-htaccess/
categories:
    - Sysadmin
tags:
    - htaccess
---

Já publiquei alguns artigos aqui no blog falando sobre as inúmeras utilidades dos arquivos .htaccess. Neste post, veremos como detectar o navegador do usuário e redirecioná-lo para uma determinada página, caso ele esteja utilizando determinado navegador.

Vamos começar criando um novo arquivo **.htaccess** com o seguinte conteúdo:

`RewriteEngine on<br></br># IE 8<br></br>RewriteCond %{HTTP_USER_AGENT} "MSIE 8.0" [NC]<br></br>RewriteRule .* http://exemplo.com/ie.html [R]<br></br># IE 9<br></br>RewriteCond %{HTTP_USER_AGENT} "MSIE 9.0" [NC]<br></br>RewriteRule .* http://exemplo.com/ie.html [R]<br></br>`

No exemplo acima, verificamos se o usuário está utilizando a versão **8** ou **9** do Internet Explorer. Caso ele esteja utilizando uma destas versões, vamos redirecioná-lo para uma página diferente, que no nosso exemplo fica no endereço **http://exemplo.com/ie.html**.

O segredo está na chave **%{HTTP\_USER\_AGENT}**, que contém a string com o agente de usuário do navegador do visitante. Baseado nesta string, conseguimos verificar qual navegador nosso visitante está utilizando. Você pode conferir uma lista com alguns agentes de usuário no site <http://www.useragentstring.com/>.

Até a próxima 😉
---
id: 905
title: 'Definindo uma página 404 personalizada via .htaccess'
date: '2014-12-10T14:39:17-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=905'
permalink: /definindo-uma-pagina-404-personalizada-via-htaccess/
categories:
    - Sysadmin
tags:
    - '404'
    - htaccess
---

Um dos métodos de personalizar as páginas de erro do seu site, é através do arquivo **.htaccess**. Para isto, você precisa de um servidor que suporte o uso de arquivos **.htaccess**.

Para definir uma página **404** personalizada, basta adicionar esta linha ao seu arquivo **.htaccess**:

`ErrorDocument 404 /404.html`

Neste caso, defini a página **404.html** que está na raiz do servidor como página de erro para o erro **404**. Assim, quando um usuário acessar uma URL inexistente, a página **404.html** será exibida.

Você pode definir diretamente um texto ou código HTML, sem precisar criar uma página específica:

`ErrorDocument 404 "<h1>Nada encontrado</h1>"`

No exemplo acima, quando ocorrer um erro 404, o texto “**Nada encontrado**” será exibido.

Até a próxima 😉
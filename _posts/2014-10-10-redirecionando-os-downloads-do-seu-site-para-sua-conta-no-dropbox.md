---
id: 832
title: 'Redirecionando os downloads do seu site para sua conta no Dropbox'
date: '2014-10-10T11:26:29-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=832'
permalink: /redirecionando-os-downloads-do-seu-site-para-sua-conta-no-dropbox/
categories:
    - Sysadmin
tags:
    - dropbox
---

![glyph-vflK-Wlfk](http://angelitomg.github.io/wp-content/uploads/2014/10/glyph-vflK-Wlfk.png)Costumo hospedar aqui no site, alguns arquivos para download (scripts, softwares e afins), porém de acordo com os termos de serviço do meu provedor de hospedagem, não é permitido hospedar estes arquivos para download. Não que eu tenha tido problemas quanto a isso, mas apenas para seguir a risca os termos, resolvi hospedar estes arquivos em minha conta no Dropbox (sem contar que fazendo isto, o consumo de banda também diminui).

Porém em vários posts, eu já tinha inserido os links para download destes arquivos, que seguiam o seguinte padrão **/downloads/nome\_do\_arquivo**. Para alterar os posts que eu já havia publicado, eu tinha duas opções:

- Alterar o link do download em cada post.
- Arrumar uma forma de continuar seguindo o mesmo padrão e redirecionar tudo que viesse após **/downloads** para a pasta pública da minha conta no Dropbox.

Por questões óbvias, escolhi a segunda opção 😛 . O Dropbox disponibiliza um link para a pasta pública de sua conta, que geralmente segue o padrão **https://dl.dropboxusercontent.com/u/id\_do\_usuario/**.

Bastou então uma simples regrinha de reescrita de URL no meu arquivo **.htaccess** e tudo estava resolvido:

` RewriteRule ^downloads/(.*) http://dl.dropbox.com/u/107471993/downloads/$1`

Até a próxima 😉
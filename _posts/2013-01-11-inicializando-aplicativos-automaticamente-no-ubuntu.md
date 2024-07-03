---
id: 563
title: 'Inicializando aplicativos automaticamente no Ubuntu'
date: '2013-01-11T13:07:06-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=563'
permalink: /inicializando-aplicativos-automaticamente-no-ubuntu/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - inicializacao
    - ubuntu
---

Esta dica foi testada em distribuições Ubuntu-like mas creio que também funcione em outras distribuições. Para adicionar um script na inicialização do sistema, utilizamos o comando **update-rc.d**, visto [neste post](http://angelitomg.com/blog/adicionando-scripts-na-inicializacao-do-ubuntu/ "Adicionando scripts na inicialização do Ubuntu"), porém agora, vamos inicializar um aplicativo gráfico junto com o sistema.

Para isto, basta copiar o arquivo **.desktop** (arquivos .desktop geralmente ficam em em **/usr/share/applications**) correspondente para a pasta **/etc/xdg/autostart**, por exemplo:

`sudo cp /usr/share/applications/firefox.desktop /etc/xdg/autostart`

No exemplo acima, toda vez que o sistema inicializar, o **Firefox** inicializará junto.

Até a próxima 😉
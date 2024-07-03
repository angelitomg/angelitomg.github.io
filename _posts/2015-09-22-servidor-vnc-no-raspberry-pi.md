---
id: 1018
title: 'Servidor VNC no Raspberry Pi'
date: '2015-09-22T16:37:20-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1018'
permalink: /servidor-vnc-no-raspberry-pi/
categories:
    - 'Raspberry Pi'
    - Sysadmin
tags:
    - 'raspberry pi'
    - vnc
---

Uma maneira de acessar a interface gráfica do seu Raspberry Pi remotamente é através do popular VNC. Neste tutorial, vamos instalar um servidor VNC no Raspbian Wheezy.

Para instalar o servidor VNC basta digitar no terminal:

`sudo apt-get install tightvncserver`

Após isto, você precisa configurar uma senha de acesso. Para isto, execute o comando:

`tightvncserver`

Tudo pronto. Precisamos apenas iniciar o servidor:

`vncserver :0 -geometry 800x600 -depth 24`

Agora é só acessar o Raspberry Pi através de um cliente VNC qualquer. Você também pode alterar a resolução mudando o valor **800×600** para a resolução desejada.

Até a próxima 😉
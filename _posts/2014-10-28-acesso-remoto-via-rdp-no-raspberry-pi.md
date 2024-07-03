---
id: 886
title: 'Acesso remoto via RDP no Raspberry Pi'
date: '2014-10-28T09:06:40-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=886'
permalink: /acesso-remoto-via-rdp-no-raspberry-pi/
categories:
    - Linux/Unix
    - 'Raspberry Pi'
    - Sysadmin
tags:
    - 'raspberry pi'
    - rdp
---

Uma alternativa para acessar a interface gráfica do Raspberry Pi remotamente é utilizar o protocolo RDP. O protocolo RDP é muito utilizado para acesso remoto em máquinas Windows.

Para instalar o servidor RDP no Raspberry Pi (estou utilizando o Raspbian Wheezy), vamos primeiro atualizar as fontes do apt. Acesse o terminal do seu Raspberry Pi e digite:

`sudo apt-get update`

Com as fontes atualizadas, vamos instalar o xrdp:

`sudo apt-get install xrdp`

Após instalado, basta utilizar um cliente RDP para acessar o Raspberry. No meu caso, utilizei o próprio cliente do Windows.

![raspberrypi-rdp](http://angelitomg.com/blog/wp-content/uploads/2014/10/raspberrypi-rdp.png)

Até a próxima 😉
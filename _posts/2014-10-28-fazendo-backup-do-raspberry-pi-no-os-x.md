---
id: 879
title: 'Fazendo backup do Raspberry Pi no OS X'
date: '2014-10-28T07:23:43-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=879'
permalink: /fazendo-backup-do-raspberry-pi-no-os-x/
categories:
    - Linux/Unix
    - Mac
    - 'Raspberry Pi'
    - Sysadmin
tags:
    - backup
    - 'raspberry pi'
---

Então você instalou o sistema no Raspberry Pi, configurou tudo e de repente precisa utilizar o cartão SD que seu sistema está instalado, para uma tarefa temporária.

Uma solução para este caso, é criar uma imagem do cartão SD. Para isto, insira o cartão no computador e no terminal do OS X, digite:

`diskutil list`

O comando acima irá listar os discos do computador. Procure pelo seu cartão na lista. No meu caso o dispositivo foi **/dev/disk2**.

Execute o seguinte comando:

`sudo dd if=/dev/disk2 of=~/raspberrypi.img`

O comando acima irá criar um arquivo chamado **raspberrypi.img** no diretório padrão do usuário. Este arquivo conterá todo o conteúdo do seu SD card.

Para enviar a imagem de volta para o cartão, digite:

`sudo dd if=~/raspberrypi.img of=/dev/disk2`

Até a próxima 😉
---
id: 561
title: 'Adicionando scripts na inicialização do Ubuntu'
date: '2013-01-11T12:59:36-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=561'
permalink: /adicionando-scripts-na-inicializacao-do-ubuntu/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - inicializacao
    - ubuntu
---

Esta dica serve tanto para o Ubuntu quanto para outras distribuições baseadas no Debian. Para adicionar um script na inicialização do sistema, basta criar o script e copiá-lo para a pasta **/etc/init.d/**:

`sudo cp seu_script.sh /etc/init.d`

Após isto, é necessário dar permissões de execução para o script:

`sudo chmod +x /etc/init.d/seu_script.sh`

Por fim, basta digitar o comando:

`sudo update-rc.d seu_script.sh defaults`

Pronto! Agora toda vez que seu sistema iniciar, seu script será executado.

Até a próxima 😉
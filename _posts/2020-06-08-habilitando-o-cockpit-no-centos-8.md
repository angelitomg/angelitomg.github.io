---
id: 1400
title: 'Habilitando o Cockpit no CentOS 8'
date: '2020-06-08T10:59:57-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1400'
permalink: /habilitando-o-cockpit-no-centos-8/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - centos
    - cockpit
---

O Cockpit é um software de gerenciamento via web disponível na versão 8 do RHEL (RedHat Enterprise Linux) e em sua versão gratuita, o CentOS (Community Enterprise Operating System).

Através do Cockpit é possível configurar praticamente todo o servidor através de uma interface web. É possível também acompanhar e monitorar o status do servidor. Se você não gosta muito de SSH, é sua oportunidade de abandonar a tela preta. 😛

Para instalar o cockpit no CentOS ou RHEL 8, basta executar os comandos abaixo:

`# Atualizacao dos repositorios`  
`sudo dnf update`

`# Instalacao do cockpit`  
`sudo dnf -y install cockpit`

`# Ativacao do servico`  
`sudo systemctl enable --now cockpit.socket`

`# Liberacao do firewall`  
`sudo firewall-cmd --add-service=cockpit --permanent`

`# Reload do firewall`  
`sudo firewall-cmd --reload`

Após a instalação você pode acessar o console web através do IP ou hostname do seu servidor, utilizando a porta 9090. No meu caso, ficou algo assim:

https://192.168.0.90:9090

Abaixo uma captura de tela da interface do Cockpit:

[![](http://angelitomg.com/blog/wp-content/uploads/2020/06/Captura-de-Tela-2020-06-08-às-10.58.28-1024x602.png)](http://angelitomg.com/blog/wp-content/uploads/2020/06/Captura-de-Tela-2020-06-08-às-10.58.28.png)

Até a próxima 😉
---
id: 1388
title: 'Instalando o htop no CentOS 8'
date: '2020-06-08T10:48:03-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1388'
permalink: /instalando-o-htop-no-centos-8/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - centos
    - htop
---

O htop é uma ferramenta de monitoramento de linha de comando bastante útil. É uma alternativa “mais bonita” ao clássico comando top.

Porém o htop não vem instalado por padrão no CentOS 8. Para instalá-lo, basta executar os comandos abaixo:

`# Atualizacao do repositorio`  
`dnf update`  
`# Instalacao do repositorio adicional`  
`dnf install epel-release`  
`# Atualizacao do repositorio com o repositorio adicional instalado`  
`dnf update`  
`# Instalacao do htop`  
`dnf install htop`

Após isto, basta executar o comando htop. Abaixo, uma imagem com a execução do comando:

[![](http://angelitomg.github.io/wp-content/uploads/2020/06/Captura-de-Tela-2020-06-08-às-10.42.43.png)](http://angelitomg.github.io/wp-content/uploads/2020/06/Captura-de-Tela-2020-06-08-às-10.42.43.png)

Até a próxima 😉
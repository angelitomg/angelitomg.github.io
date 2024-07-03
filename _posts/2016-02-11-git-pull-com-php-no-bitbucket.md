---
id: 1171
title: 'Git pull com PHP no Bitbucket'
date: '2016-02-11T11:29:49-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1171'
permalink: /git-pull-com-php-no-bitbucket/
categories:
    - GIT
    - PHP
    - Programação
    - Scripts
tags:
    - bitbucket
    - git
    - php
---

Quando comecei a desenvolver o [AMG Controle](http://controle.amglabs.net), precisava de um local onde eu pudesse hospedar o repositório do projeto. O [Github](https://github.com) era uma boa alternativa, porém só permitia repositórios públicos. A alternativa que encontrei foi utilizar o [Bitbucket](https://bitbucket.org), que permite a criação de repositórios privados em seu plano gratuito.

Com a questão da hospedagem do repositório resolvida, veio outro problema: cada cliente, possui sua própria instância do [AMG Controle](http://controle.amglabs.net) independente, ou seja, cada cliente possui um “**clone**” do repositório. Quando algo é atualizado no repositório principal, é necessário executar um **git pull** em cada repositório, para que as alterações tenham efeito.

Para resolver este problema, nada melhor que um script PHP. Ele basicamente precisa entrar em cada repositório e executar um **git pull**. Mais aí vem outro problema: utilizar **SSH** ou **HTTPS** para executar o **git pull**?

Com SSH é necessário a utilização de chaves e tudo mais. Já com HTTPS, a coisa fica mais fácil. Basta informar o nome de usuário e a senha através da URL e executar o comando com a função **shell\_exec** ou algo semelhante. Algo mais ou menos parecido com isto:

`echo shell_exec('https://usuario:senha@bitbucket.org/usuario/repositorio.git');`

Se você se interessou, pode pegar o script completo [AQUI](https://www.angelitomg.github.io/downloads/atualizar-git.zip).

Até a próxima 😉
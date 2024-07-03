---
id: 69
title: 'Diferenças entre include e require em PHP'
date: '2012-01-27T00:21:51-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=69'
permalink: /diferencas-entre-include-e-require-em-php/
categories:
    - PHP
    - Programação
tags:
    - php
---

O comando **include** e o comando **require** disponíveis na linguagem PHP, possibilitam a chamada de arquivos externos ao script em execução. Geralmente são utilizados para chamarem arquivos com funções úteis, arquivos de classes ou ainda arquivos que contenham o HTML de um menu, por exemplo.

Apesar de terem o mesmo propósito, o require e o include tem ligeiras diferenças, que fazem com que cada um deles, seja indicado para um determinado propósito, além do mais, os dois comandos tem uma variação: **require\_once** e **include\_once**. Vamos as explicações:

**include:** chama um arquivo externo. Se o arquivo não existir ou houver algum erro na hora da chamada do arquivo, o script gera um erro, porém continua em execução. Além disto, é permitido que sejam passados parâmetros por GET ao arquivo chamado, desde que seja chamado através de sua URL completa e que a diretiva allow\_url\_include do PHP esteja ativada.

**include\_once:** tem a mesma função do comando include, porém chama o arquivo apenas se ele ainda não tiver sido chamado no arquivo atual, evitando assim, que o arquivo seja chamado 2 vezes ou mais no mesmo script.

**require:** chama um arquivo externo, porém se algum erro ocorrer na hora da chamada, aborta o script em execução.

**require\_once:** tem a mesma função do require, porém chama o arquivo externo somente se ele ainda não tiver sido chamado por um outro comando executado anteriormente no script.

Espero que tenham compreendido,

Até a próxima 😉
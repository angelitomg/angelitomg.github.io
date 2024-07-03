---
id: 434
title: 'Enviando dados com cURL pela linha de comando'
date: '2012-12-18T15:45:57-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=434'
permalink: /enviando-dados-com-curl-pela-linha-de-comando/
categories:
    - Programação
tags:
    - curl
    - 'linha de comando'
    - programação
---

[![curl_logo](http://angelitomg.com/blog/wp-content/uploads/2012/12/curl-refined.jpg)](http://angelitomg.com/blog/wp-content/uploads/2012/12/curl-refined.jpg)A biblioteca cURL é uma biblioteca com versões disponíveis para a maioria das linguagens de programação, utilizada para realizar a transferência de dados utilizando vários protocolos. Além de ser uma biblioteca, é também uma ferramenta de linha de comando, o que nos permite assim, utilizá-la diretamente do terminal, sem a necessidade de estar utilizando alguma linguagem.

A cURL oferece diversas opções e recursos, mas neste post vamos ver apenas como enviar dados via POST para uma página web. Para isto, suponho que você já esteja com a cURL instalada e funcionando. Instaladores e dicas de instalação podem serem encontradas através do [site oficial](http://curl.haxx.se/). Vamos ao que interessa:

### Enviando dados:

Basta abrir o terminal e digitar o seguinte comando:

`curl --data "objeto=grama&cor=verde" "http://localhost/post.php"`

No exemplo acima, enviamos dois campos via POST (o campo **objeto** com o valor **grama** e o campo **cor** com o valor **verde**) para a página **http://localhost/post.php**.

### Enviandos dados e arquivos:

Para enviar dados e arquivos, basta utilizar o comando:

`curl --form "arquivo1=@teste.txt" "http://localhost/post.php"`

No exemplo acima, enviamos o campo **arquivo1** cujo valor é o arquivo **teste.txt** para a página **http://localhost/post.php**.

<span style="color: #ff0000;">**Atenção:**</span> para simbolizar que estamos enviando um arquivo, devemos adicionar o arroba na frente do nome do arquivo.

Simples assim!

Até a próxima 😉
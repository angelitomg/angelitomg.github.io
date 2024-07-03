---
id: 739
title: 'Comprimindo imagens JPG via linha de comando'
date: '2013-11-23T09:34:35-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=739'
permalink: /comprimindo-imagens-jpg-via-linha-de-comando/
categories:
    - Linux/Unix
    - Programação
    - Scripts
    - 'Shell Script'
tags:
    - bash
    - jpg-compress
    - programação
    - 'shell script'
---

Há alguns dias atrás, precisei reduzir o tamanho (e qualidade) de algumas imagens JPG. Para isto, utilizei o comando **convert**, presente no pacote **ImageMagick**.

Como eram muitas imagens, resolvi criar um script para isto. O script roda via linha de comando e recebe apenas dois parâmetros:

**caminho** -&gt; caminho do diretório onde estão as imagens (<span style="color: #ff0000;">**todas as imagens JPG serão convertidas e sobreescritas!**</span>)

**qualidade** -&gt; qualidade das imagens após a conversão.

Para executá-lo, basta digitar:

`bash jpg-compress /home/angelito/Imagens 90`

Onde **/home/angelito/Imagens** é o caminho das imagens e **90** é a qualidade das imagens após a conversão.

O script pode ser baixado [AQUI](https://angelitomg.com/downloads/jpg-compress.zip). Se quiser contribuir com o código, acesse o [repositório no GitHub](https://github.com/angelitomg/jpg-compress).

Até a próxima 😉
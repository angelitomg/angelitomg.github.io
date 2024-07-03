---
id: 566
title: 'Instalando o DJGPP no DOSBox'
date: '2013-01-11T14:02:19-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=566'
permalink: /instalando-o-djgpp-no-dosbox/
categories:
    - DOS
    - 'Linguagem C'
tags:
    - djgpp
    - dosbox
---

[![dosbox](http://angelitomg.com/blog/wp-content/uploads/2013/01/DOSBox_Logo.png)](http://angelitomg.com/blog/wp-content/uploads/2013/01/DOSBox_Logo.png)O DOSBox é um software que permite emular um ambiente **DOS** de modo quase perfeito. Já o **DJGPP** é um compilador muito utilizado no sistemas DOS. Neste post vamos ver como instalar de forma rápida e fácil o DJGPP dentro do DOSBox. Vamos então a instalação:

Primeiro, acesse [este link](http://www.delorie.com/djgpp/zip-picker.html) e baixe o DJGPP. É importante que na parte de seleção de sistema operacional, você selecione **MS-DOS, OpenDOS, PC-DOS**.

Após a seleção de pacotes, serão exibidos os pacotes para download. Baixe todos e coloque-os em uma pasta. Extraia todos os arquivos e depois apague os arquivos .zip baixados, já que não iremos mais precisar deles.

No nosso exemplo, vamos supor que nosso diretório de trabalho (diretório que serra montado no DOSBox) é **/Users/angelito/dosapps** e o diretório com os arquivos do DJGPP é **/Users/angelito/dosapps/DJGPP**.

Agora abra o arquivo de configuração do DOSBox e adicione as seguintes linhas no fim do arquivo:

`mount c /Users/angelito/dosapps`

`set PATH=z:\;c:\DJGPP\bin`

`set DJGPP=c:\DJGPP\djgpp.env`

O arquivo de configuração do DosBox varia de sistema para sistema, mas os padrões são:

**Windows XP:**

`%USERPROFILE%\Local Settings\Application Data\DOSBox\dosbox-{version}.conf`

**Windows Vista, 7:**

`{system drive}:\Users\<i>{username}</i>\AppData\Local\DOSBox\dosbox-{version}.conf`

**Mac OS X:**

`~/Library/Preferences/DOSBox 0.73 Preferences`

**Linux:**

`~/.dosbox/dosbox-0.74.conf`

Onde **0.74** é a versão do DOSBox.

Agora abra o DosBox e digite:

`c:`

Depois de entrar no disco **C**, digite:

`gcc`

Pronto, nosso compilador está instalado e funcionando.

Até a próxima 😉
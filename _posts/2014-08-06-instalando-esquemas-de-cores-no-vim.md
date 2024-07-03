---
id: 760
title: 'Instalando esquemas de cores no VIM'
date: '2014-08-06T12:10:34-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=760'
permalink: /instalando-esquemas-de-cores-no-vim/
categories:
    - VIM
tags:
    - colorschemes
    - vim
---

O VIM é um poderoso editor de textos, muito popular entre desenvolvedores e usuários de sistemas \*nix. Possui diversos recursos, inclusive a possibilidade de instalação de esquemas de cores personalizados.

Para instalar um esquema de cores personalizado, primeiro é necessário obter o arquivo de configuração do tema.

Em seguida, copie o arquivo para o diretório **.vimrc/colors/**. O diretório **.vimrc** normalmente fica na pasta home do usuário (em sistemas \*nix). No meu caso, copiei o arquivo monokai.vim.

Com o arquivo copiado para a pasta correta, basta abrir o arquivo de configuração principal do seu VIM, o .**vimrc**, que também fica localizado na pasta home do usuário.

Adicione então a seguinte linha ao arquivo:

`colorscheme nome_do_seu_tema`

Onde **nome\_do\_seu\_tema** é o nome do arquivo do tema, sem a extensão .vim.

No meu caso, ficou assim:

`colorscheme monokai`

Abra o VIM e seu esquema de cores já estará instalado e funcionando.

Você também pode alterar os esquemas de cores instantaneamente. Com o VIM aberto, pressione **esc** para entrar no modo de comandos e então digite:

`:colorscheme nome_do_tema`

Onde **nome\_do\_tema** é o nome do esquema de cores desejado.

Até a próxima 😉
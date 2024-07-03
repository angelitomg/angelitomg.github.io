---
id: 522
title: 'Instalando o OpenBSD 5.2'
date: '2012-12-24T14:50:27-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=522'
permalink: /instalando-o-openbsd-5-2/
categories:
    - Linux/Unix
    - Sysadmin
tags:
    - instalação
    - openbsd
---

[![openbsd_logo](http://angelitomg.github.io/wp-content/uploads/2012/12/tshirt-38.gif)](http://angelitomg.github.io/wp-content/uploads/2012/12/tshirt-38.gif)O OpenBSD é um sistema operacional da família BSD cujo foco principal é a segurança. É um dos sistemas operacionais mais seguros do planeta, tendo apenas 2 falhas de segurança descobertas na instalação padrão durante mais de uma década. Neste tutorial vou ensinar como instalá-lo da forma mais padrão possível. O download pode ser feito através do [site oficial](http://www.openbsd.org/).

Vou instalá-lo em uma máquina virtual. Não vou abordar a configuração da máquina virtual pois este não é o foco. Vamos a instalação:

Após dar boot pelo CD de instalação, será exibida a tela de boot do OpenBSD. Apenas tecle enter.

[![screenshot_openbsd](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_01.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_01.png)

Após isto, surgirá uma mensagem pergutando se você deseja instalar, atualizar ou utilizar o shell do sistema. Escolheremos a opção **i**, pois queremos instalar o sistema.

[![screenshot_openbsd](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_02.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_02.png)

Após isto serão feitas diversas perguntas. Como faremos uma instalação mais ou menos padrão basta apertar enter em todas as opções, exceto nas opções onde você deve informar o **hostname** da máquina que esta sendo instalada e a **senha do root**. Se desejar selecionar alguma opção diferente em alguma das perguntas, basta pressionar a tecla **?** (nas perguntas que suportam esta opção) para que seja exibida uma lista com as opções disponíveis.

[![screenshot_openbsd](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_03.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_03.png)

Após mais uma série de perguntas, o OpenBSD por fim, começará a ser instalado.

[![screenshot_openbsd](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_04.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_04.png)

Após a instalação ser concluída, serão feitas mais algumas perguntas. Depois de respondidas, basta digitar reboot, ejetar a mídia de instalação e o sistema será iniciado. Faça o login e pronto, o OpenBSD estará pronto para o uso.

[![screenshot_openbsd](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_05.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/openbsd_05.png)

Até a próxima 😉
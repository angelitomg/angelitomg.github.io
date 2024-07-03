---
id: 868
title: 'Acessando os pinos GPIO do Raspberry Pi'
date: '2014-10-21T07:24:38-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=868'
permalink: /acessando-os-pinos-gpio-do-raspberry-pi/
categories:
    - Linux/Unix
    - 'Raspberry Pi'
    - 'Shell Script'
tags:
    - gpio
    - 'raspberry pi'
---

O Raspberry Pi disponibiliza uma série de pinos GPIO para uso geral. Através destes pinos, podemos aplicar uma determinada tensão e também detectar quando uma tensão for aplicada sobre certo pino.

O Raspberry Pi B rev 2, que é a versão que vamos utilizar como base, possui 26 pinos de entrada e saída. Abaixo segue um diagrama informando os pinos que o Raspberry Pi B rev 2 disponibiliza:

![raspberry_pi_model_b_rev2_pinout](http://angelitomg.com/blog/wp-content/uploads/2014/10/raspberry_pi_model_b_rev2_pinout.png)

Para começar a trabalhar com os pinos GPIO, primeiramente precisamos inicializá-los. Para isto, em seu Raspberry Pi digite o seguinte comando (vamos supor que você esteja utilizando o Raspbian Wheezy):

` sudo echo 27 > /sys/class/gpio/export<br></br>`

Onde **27** é o número do pino que está sendo inicializado. No exemplo acima, estou inicializando o **GPIO27**. Após isto, será criado o diretório **/sys/class/gpio/gpio27**. Este diretório possui dois arquivos importantes: **direction** e **value**.

Através do arquivo **direction**, vamos definir como nosso pino irá se comportar. Os valores possíveis basicamente são: **in** e **out**.

Quando o valor **in** for utilizado, estamos dizendo que esperamos receber uma tensão (geralmente 3.3v) naquele pino. Assim, quando uma tensão for aplicada sobre aquele pino, o seu arquivo **value** terá o valor **1**. Quando não houver tensão aplicada sobre o pino, o conteúdo do seu arquivo **value** será 0.

Já quando o conteúdo do arquivo **direction** for **out**, o Raspberry Pi irá aplicar uma determinada tensão no pino desejado. Assim, quando o conteúdo do arquivo **value** do pino possuir o valor **1**, o pino estará ligado, ou seja, existirá uma tensão saindo dele. Quando o conteúdo do arquivo **value** for 0, o pino não possuirá tensão.

No nosso exemplo, vamos configurar o arquivo **direction** para **out**, pois queremos aplicar uma tensão ao pino selecionado. Para isto, vamos executar o comando abaixo:

`sudo echo "out" > /sys/class/gpio/gpio27/direction`

Com o pino devidamente configurado, vamos ligá-lo:

`sudo echo 1 > /sys/class/gpio/gpio27/value`

Agora, se medir com o multímetro, haverá uma tensão no **GPIO27**. Na foto abaixo, demonstrei utilizando um led.

![image](http://angelitomg.com/blog/wp-content/uploads/2014/10/image-300x224.jpeg)

Para remover a tensão do pino, basta executar:

`sudo echo 0 > /sys/class/gpio/gpio27/value`

Após utilizar o pino, podemos desativá-lo, através do comando:

`sudo echo 27 > /sys/class/gpio/unexport`

Mais documentações você encontra no site oficial <http://raspberrypi.org>.

Até a próxima 😉
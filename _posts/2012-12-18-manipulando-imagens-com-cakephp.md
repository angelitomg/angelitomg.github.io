---
id: 426
title: 'Manipulando imagens com CakePHP'
date: '2012-12-18T14:48:06-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=426'
permalink: /manipulando-imagens-com-cakephp/
categories:
    - CakePHP
    - PHP
    - Programação
    - Scripts
tags:
    - cakephp
    - php
    - programação
    - upload
---

[![cakephp_logo](http://angelitomg.github.io/wp-content/uploads/2012/12/cakephp_logo_250_trans.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/cakephp_logo_250_trans.png)O Qimage (QuickImage) é um componente desenvolvido para o framework CakePHP (versão 2.x) cujo objetivo é facilitar a manipulação e o upload de imagens. Através dele é possível copiar imagens vindas através de upload, redimensionar, cortar e adicionar marca d’água em imagens.

### Instalação

Basta copiar o arquivo **QimageComponent.php** para a pasta **/app/Controller/Component/** da sua aplicação e incluir o nome **‘Qimage’** dentro do array de componentes do seu controller. Por exemplo:

`public $components = array('Qimage');`

Após isto você já pode chamar os métodos do componente, vamos a eles:

### copy

Este método simplesmente copia a imagem informada (que deve ser um índice do array $\_FILES) para o local informado no índice ‘path’ do array passado como parâmetro. Recebe um array onde os índices que devem ser informados são:

– **$data\[‘file’\]**  -&gt; array com os dados da imagem. Geralmente são os dados do array $\_FILES. Por exemplo, se estamos fazendo o upload de um campo file com o nome ‘logo’, esse parâmetro deve ser o conteúdo de $\_FILES\[‘logo’\].

– **$data\[‘path’\]** -&gt; local onde a imagem deve ser salva.

**Exemplo:**

`$this->Qimage->copy(array('file' => $_FILES['foto_1'], 'path' => '/img/fotos/'));`

### watermark

Este método irá adicionar a marca d’água, que estiver configurada na classe, na imagem informada. Recebe um array como parâmetro onde os dados que devem ser informados são:

– **$data\[‘file’\]** -&gt; arquivo onde a marca d’água deve ser aplicada. A imagem da marca d’água fica definida na propriedade **watermarkImage** da classe.

**Exemplo:**

`$this->Qimage->watermark(array('file' => '/img/foto1.png'));`

### crop

Este método corta uma determinada área da imagem. Recebe um array como parâmetro cujos índices desse array que serão necessários são:

– **$data\[‘file’\]** -&gt; imagem que deve ser cortada.

– **$data\[‘output’\]** -&gt; local onde o arquivo gerado deverá ser salvo. Será gerado um arquivo com o mesmo nome do arquivo de entrada, portanto, deve ser um diretório diferente do diretório do arquivo de entrada, caso contrário ele será sobreescrito.

– **$data\[‘w’\]** -&gt; largura da área que será cortada.

– **$data\[‘h’\]** -&gt; altura da área que será cortada.

– **$data\[‘x’\]** -&gt; ponto x onde começará o corte da imagem.

– **$data\[‘y’\]** -&gt; ponto y onde começará o corte da imagem.

**Exemplo:**

` $this->Qimage->crop(array('w' => 400, 'h' => 300, 'x' => 100, 'y' => 100, 'file' => $file, 'output' => $path));`

### resize

Este método é responsável por realizar o redimensionamento de uma imagem. Recebe um array como parâmetro cujos índices desse array que serão necessários são:

– **$data\[‘file’\]** -&gt; imagem que deve ser redimensionada.

– **$data\[‘output’\]** -&gt; local onde o arquivo gerado deverá ser salvo. Será gerado um arquivo com o mesmo nome do arquivo de entrada, portanto, deve ser um diretório diferente do diretório do arquivo de entrada, caso contrário ele será sobreescrito.

– **$data\[‘width’\]** -&gt; largura que a imagem deve ser redimensionada.

– **$data\[‘height’\]** -&gt; altura que a imagem deve ser redimensionada.

– **$data\[‘proporcional’\]** – &gt; True ou false. se for true, redimensiona a imagem somente se as dimensões originais da imagem forem maiores que as informadas nos parâmetros.

Se somente a altura ou a largura for informada, o método calculará automaticamente o valor que falta para que a imagem fique proporcional.

**Exemplo:**

`$this->Qimage->resize(array('height' => 180, 'width' => 240, 'file' => '/img/img1.jpg', 'output' => '/img/thumbs/'));`

O download do componente pode ser feito [AQUI](https://angelitomg.github.io/downloads/QimageComponent.zip).

[GitHub do componente](https://github.com/angelitomg/qimagecomponent).

Qualquer dúvida quanto ao uso ou ao funcionamento, basta entrar em contato.

Até a próxima 😉
---
id: 394
title: 'Fazendo um contador regressivo com AJAX e PHP'
date: '2012-12-14T14:38:17-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=394'
permalink: /fazendo-um-contador-regressivo-com-ajax-e-php/
categories:
    - PHP
    - Programação
    - Scripts
tags:
    - ajax
    - contador
    - 'contador regressivo'
    - php
---

Com o fim do mundo próximo, vou mostrar a vocês neste post como fazer um contador regressivo utilizando PHP e AJAX. Para que o contador fique dinâmico, vamos usar a biblioteca jQuery para fazer a requisição AJAX.

Vamos aos códigos:

**index.html**

> &lt;!doctype html&gt;  
> &lt;html&gt;  
> &lt;head&gt;  
> &lt;title&gt;Contador em PHP&lt;/title&gt;  
> &lt;script type=”text/javascript” src=”jquery.js”&gt;&lt;/script&gt;  
> &lt;script type=”text/javascript”&gt;  
> $(document).ready(function(){
> 
> // Requisicao AJAX  
> var requisicao = function(){  
> $.ajax({  
> url: “contador.php”  
> }).done(function(resultado){  
> // Exibe o resultado no elemento com ID contador  
> $(“#contador”).html(resultado);  
> });  
> };
> 
> // Executa a requisicao com intervalo de 100ms  
> setInterval(requisicao, 100);
> 
> });
> 
> &lt;/script&gt;  
> &lt;/head&gt;  
> &lt;body&gt;  
> &lt;p&gt;Faltam &lt;span id=”contador”&gt;&lt;/span&gt; segundos para o fim do mundo!&lt;/p&gt;  
> &lt;/body&gt;  
> &lt;/html&gt;

No código acima apenas fizemos uma requisição AJAX para a página contador.php, que contém o resultado do nosso contador.

**contador.php**

> &lt;?php
> 
> // Define as datas  
> $data\_atual = date(‘d-m-Y h:i:s’);  
> $data\_final = date(‘2012-12-21’);
> 
> // Converte as datas para a hora UNIX e realiza o calculo da diferenca  
> $diferenca = strtotime($data\_final) – strtotime($data\_atual);
> 
> // Exibe o resultado se ele for positivo. Caso seja negativo, exibe 0.  
> echo ($diferenca &gt;= 0) ? $diferenca : 0;
> 
> ?&gt;

No código acima, convertemos as duas datas para a [hora UNIX](http://angelitomg.com/blog/a-hora-unix/ "A Hora UNIX"), realizamos o cálculo da diferença entre elas e por fim exibimos o resultado.

Você pode baixar os códigos deste post [AQUI](https://angelitomg.github.io/downloads/contador_regressivo.zip).

Até a próxima 😉
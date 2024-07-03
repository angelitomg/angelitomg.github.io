---
id: 306
title: 'TDD e PHP com SimpleTest'
date: '2012-08-08T00:38:33-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=306'
permalink: /tdd-e-php-com-simpletest/
categories:
    - PHP
    - Programação
tags:
    - php
    - programação
    - tdd
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/08/tdd.png "tdd")](http://angelitomg.com/blog/wp-content/uploads/2012/08/tdd.png)TDD (Test Driven Development ou Desenvolvimento Dirigido por Testes) é uma técnica de desenvolvimento na qual primeiros são escritos os testes, para depois o código em si. ([Você pode ler mais aqui](http://pt.wikipedia.org/wiki/Test_Driven_Development)). Já o [SimpleTest](http://www.simpletest.org/), é um framework escrito em PHP, utilizado para a criação de testes com PHP.

Para utilizar o SimpleTest, basta baixar o framework, descompactar e incluir o arquivo ‘**autorun.php**‘ no seu arquivo de testes. Vamos então criar o arquivo de testes:

> &lt;?php
> 
> require(‘simpletest/autorun.php’);
> 
> require(‘testes.php’);
> 
> class TestOfTestes extends UnitTestCase{
> 
> function teste(){
> 
> // Objeto da classe que queremos testar
> 
> $obj = new Testes();
> 
> // Aqui vao os testes
> 
> $this-&gt;assertTrue($obj-&gt;verificarNumero(3));
> 
> $this-&gt;assertEqual($obj-&gt;escreverMensagem(‘Teste’), ‘Teste’);
> 
> }
> 
> }
> 
> ?&gt;

**Explicando:** no exemplo acima, chamamos o arquivo responsavel por executar os testes (**autorun.php**) e também a classe que queremos testar (**teste.php**). Criamos então uma classe que será utilizada para testar nossa classe (**TestOfTestes**). Ela deve herdar a classe **UnitTestCase**. Após isto, criamos um método qualquer e dentro dele criamos um objeto da classe que desejamos testar e iniciamos os testes.

Primeiro, dizemos através do método **assertTrue**, que o método **verificarNumero()**, recebendo como parâmetro o número **3**, deve retornar **true**. Após isto, dizemos através do método **assertEqual** que o retorno do método **escreverMensagem()**, recebendo como parâmetro a string **‘Teste’**, deve ser **‘Teste’**, já que o método **escreverMensagem()** apenas imprime e retorna a string passada como parâmetro.

Depois de criados os testes, vamos criar a classe que desejamos testar:

> &lt;?php
> 
> class Testes{
> 
> function verificarNumero($num = 0){
> 
> return ($num &gt; 0) ? true : false;
> 
> }
> 
> function escreverMensagem($msg){
> 
> print $msg;
> 
> return $msg;
> 
> }
> 
> }
> 
> ?&gt;

[![](http://angelitomg.com/blog/wp-content/uploads/2012/08/tdd_php.png "tdd_php")](http://angelitomg.com/blog/wp-content/uploads/2012/08/tdd_php.png)

Após isto, vamos executar nosso arquivo de testes. Será exibido uma mensagem informando que os testes passaram. Experimente agora colocar um número negativo como parâmetro no método **verificarNumero()** e uma mensagem diferente como parâmetro no método **escreverMensagem()**.

Isto é só um pequeno exemplo do que o framework SimpleTest é capaz. Para ir mais a fundo, dê uma olhada no [site oficial](http://www.simpletest.org).

Você pode baixar os arquivos do exemplo [AQUI](https://angelitomg.com/downloads/tdd_php.zip).

Até a próxima 😉
---
id: 227
title: 'Utilizando interfaces em PHP'
date: '2012-04-20T01:35:13-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=227'
permalink: /utilizando-interfaces-em-php/
categories:
    - PHP
    - Programação
tags:
    - interfaces
    - php
---

Interfaces é um recurso muito interessante disponível em PHP e também em outras linguagens orientadas a objeto, pois permite que você defina métodos e atributos que devem ser implementados por uma determinada classe. Além de permitir um maior controle, isto garante que certos métodos estejam disponíveis em uma determinada classe.

Para utilizar interfaces, devemos primeiro criá-la e definir os métodos que devem ser implementados pela classe que implementá-la. Vamos criar uma interface que define 3 métodos:

> interface iCadastro{  
> public function cadastrar();  
> public function excluir($id = 0);  
> public function listar();  
> }

Vamos agora criar uma classe que irá implementá-la. Utilizamos o comando implements para definir que a classe irá implementar uma interface:

> class Cadastro implements iCadastro{
> 
> public function cadastrar(){  
> echo ‘Cadastro’;  
> }
> 
> public function excluir($id = 0){  
> echo ‘Excluir. ID -&gt; ‘ . $id;  
> }
> 
> public function listar(){  
> echo ‘Listando…’;  
> }
> 
> }

Pronto, a classe está implementando todos os métodos definidos pela interface. Note que se não implementassemos algum dos métodos definidos anteriormente na interface a qual a classe está implementando, iríamos receber um erro fatal.

Atenção: os métodos definidos na interface e posteriormente implementados pela classe devem ser métodos públicos.

Até a próxima 😉
---
id: 92
title: 'Validando emails com PHP'
date: '2012-01-31T16:56:13-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=92'
permalink: /validando-emails-com-php/
categories:
    - PHP
    - Scripts
    - Segurança
tags:
    - php
    - programação
    - segurança
---

Validar emails é uma coisa essencial no universo WEB, seja para utilizá-lo em uma newsletter ou em um cadastro qualquer. A melhor forma de validar um email é utilizando os famosos “**emails de confirmação**“, porém como nem todo sistema necessita deste tipo de validação, apresento-lhes uma função simples de verificação de email, que verifica inclusive se o domínio do email informado possui um servidor de email respondendo.

Vamos ao código:

> &lt;?php
> 
> /\*———————————————————–  
> \*  
> \* @nome: verificaEmail  
> \*  
> \* @descricao: Funcao para verificar se um email e valido  
> \* retorna TRUE se o email for valido e FALSE se for invalido  
> \*  
> \* @autor: Angelito M. Goulart  
> \*  
> \* @data: 13/10/2011  
> \*  
> \*———————————————————–\*/  
> function verificaEmail($email){
> 
> /\* Verifica se o email e valido \*/  
> if (filter\_var($email, FILTER\_VALIDATE\_EMAIL)){
> 
> /\* Obtem o dominio do email \*/  
> list($usuario, $dominio) = explode(‘@’, $email);
> 
> /\* Faz um verificacao de DNS no dominio \*/  
> if (checkdnsrr($dominio, ‘MX’) == 1){  
> return TRUE;  
> } else {  
> return FALSE;  
> }
> 
> } else {  
> return FALSE;  
> }  
> }
> 
> ?&gt;

Explicando:

Primeiro, recebemos o email. Verificamos se é um email válido através da função **filter\_var()**. Passando por esta validação, dividimos o nome de usuário do domínio e então verificamos se o domínio do email possui um servidor de email respondendo. Fizemos esta verificação através da função **checkdnsrr()**.

O resultado da função é que se o email realmente for válido, retorna TRUE, caso contrário, retorna FALSE. Lembrando que se desejar realizar uma validação mais completa, o jeito é utilizar um email de verificação, onde o sistema envia um email para o usuário com um token de verificação e o usuário então tem que acessar uma página que faz a validação do token enviado

Você pode baixar a função [AQUI](https://angelitomg.github.io/downloads/verificaEmail.zip).

Até a próxima 😉
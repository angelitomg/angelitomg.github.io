---
id: 113
title: 'Bloqueando acesso direto em scripts PHP'
date: '2012-02-06T15:09:58-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=113'
permalink: /bloqueando-acesso-direto-em-scripts-php/
categories:
    - PHP
    - Programação
    - Segurança
tags:
    - php
    - programação
    - segurança
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/02/denied.gif "denied")](http://angelitomg.com/blog/wp-content/uploads/2012/02/denied.gif)Bloquear scripts contra acesso direto, é algo bastante necessário pra quem desenvolve para web, principalmente se o arquivo a ser bloqueado seja um arquivo de configurações, com funções úteis, etc.

O ideal nestas situações, é que se mantenha o arquivo acima da pasta raiz do seu servidor, porém quando isto não é possível, temos uma outra alternativa: vamos comparar o nome do arquivo a ser protegido, com o nome do arquivo que esta em execução.

Para isto, basta adicionar este trecho de código ao arquivo que se deseja proteger:

> &lt;?php
> 
> if (strcmp(basename($\_SERVER\[‘SCRIPT\_NAME’\]), basename(\_\_FILE\_\_)) === 0){
> 
> header(“location: teste.php”);
> 
> }
> 
> ?&gt;

Vamos as explicações:

Utilizamos a função **strcmp()** para comparar duas strings, que são elas:

**$\_SERVER\[‘SCRIPT\_NAME’\]** -&gt; Variável que contem o nome do script em execução.

**\_\_FILE\_\_** -&gt; Constante que contém o nome do arquivo onde a constante foi chamada.

Neste caso, dentro de \_\_FILE\_\_, temos o nome do arquivo a ser incluido, ou seja, o arquivo que não queremos disponibilizar o acesso direto. Dentro da variável $\_SERVER\[‘SCRIPT\_NAME’\], temos o nome do script que está em execução. Para complementar, utilizamos a função basename(), que retira todo o caminho, retornando apenas o nome do arquivo em si.

Com a função strcmp(), comparamos as duas strings. Se as duas forem iguais (retorno da função strcmp() for igual a 0), é porque o arquivo que está sendo executado, tem o mesmo nome do arquivo que desejamos proteger, ou seja, que pode ser apenas incluído por outros scripts, portanto, vamos redirecionar o usuário para algum local, caso contrário, se os valores forem diferentes, continuamos executando o script normalmente.

Assim, o arquivo pode ser chamado normalmente por um include ou require, porém quando for acessado diretamente por um usuário, o usuário será redirecionado para a página informada na função header().

Até a próxima 😉
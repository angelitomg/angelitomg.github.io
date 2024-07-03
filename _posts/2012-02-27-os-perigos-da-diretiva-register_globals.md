---
id: 181
title: 'Os perigos da diretiva register_globals'
date: '2012-02-27T10:21:20-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=181'
permalink: /os-perigos-da-diretiva-register_globals/
categories:
    - PHP
    - Programação
    - Segurança
tags:
    - php
    - programação
    - segurança
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/02/Document-Code-PHP-Error.jpg "Document Code PHP Error")](http://angelitomg.com/blog/wp-content/uploads/2012/02/Document-Code-PHP-Error.jpg)A diretiva register\_globals, presente no PHP, quando ativada, faz com que todos os índices presentes nos arrays superglobais $\_POST, $\_GET, $\_COOKIE, $\_SESSION $\_SERVER, se tornem automaticamente variáveis dentro do seu script. Antigamente, isto era utilizado por diversos programadores, pois evita o trabalho de atribuição das variáveis.

A partir da versão 4.2.0 do PHP, esta diretiva vem desabilitada por padrão, pois as facilidades providas por ela, contribuem para que programadores iniciantes e desavisados cometam falhas de seguranças em seus códigos. A partir da versão 5.3, esta diretiva é considerada obsoleta e a partir da versão 5.4 ela não está mais presente.

Vamos a um exemplo de falha de segurança com register\_globals:

Vamos supor que você tenha um sistema de login e verifica que, se as variáveis de sessão user e pass existirem, a variável de controle auth, assume o valor 1.

> &lt;?php  
> if (isset($\_SESSION\[‘user’\]) &amp;&amp; isset($\_SESSION\[‘pass’\])){  
> $auth = 1;  
> }
> 
> if ($auth == 1){  
> echo ‘Logged user!’;  
> } else {  
> echo ‘You must have logged!’;  
> }
> 
> ?&gt;

O código funciona perfeitamente, porém se a diretiva register\_globals estiver habilitada e o usuário que acessar esta página passar a variável auth por post, com o valor 1, o script falhará e mostrará que o usuário está autenticado, mesmo que ele não esteja.

Além disto, se esta diretiva estiver habilitada e você tiver variáveis no seu script com o mesmo nome de algum índice das superglobais, ocorrerão erros de sobreescrita de variáveis.

### Por que não utilizar?

1. Diretiva obsoleta, que será removida no PHP 6.
2. Aumenta as chances de falhas de segurança cometidas pelo programador.
3. Aumenta as chances de erros de programação, como sobreescrita de variáveis, alteração de valores.

### Como desabilitar a diretiva register\_globals?

Para desabilitar a register\_globals você tem duas opções:

**Arquivo de configuração do php (php.ini).**

**Arquivo .htaccess**

### Desabilitando pelo php.ini

Para desabilitar a register\_globals pelo arquivo php.ini, localize o arquivo de configuração do php (php.ini) e edite a linha:

> register\_globals = On

para:

> register\_globals = Off

### Desabilitando pelo arquivo .htacess

Se você não tem acesso ao arquivo de configurações do PHP, você pode desabilitar a diretiva pelo arquivo .htaccess. Para isto, crie um arquivo .htaccess na pasta raiz do seu servidor web e adicione a seguinte linha ao arquivo:

> php\_flag register\_globals Off

Pronto, a diretiva register\_globals estará desativada!

Até a próxima 😉
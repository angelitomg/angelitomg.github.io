---
id: 155
title: 'Cookies em PHP'
date: '2012-02-23T22:24:33-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=155'
permalink: /cookies-em-php/
categories:
    - PHP
    - Programação
tags:
    - cookies
    - php
    - programação
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/02/cookie.png "cookie")](http://angelitomg.com/blog/wp-content/uploads/2012/02/cookie.png)Cookie são arquivos de texto que são armazenados na máquina do cliente. São muito úteis pois através deles é possível armazenar preferências e outros dados na máquina do cliente, para que possam serem recuperados na próxima vez que aquele usuário acessar o site.

Para trabalhar com cookies no PHP, utilizaremos a função **setcookie()**.

A função setcookie tem a seguinte definição:

**bool setcookie(string $name, string $value, int $expire = 0, string $path, string $domain, bool $secure, bool $httponly = false);**

Onde:

**$name** -&gt; Nome do cookie.

**$value** -&gt; Valor do cookie.

**$expire** -&gt; Validade do cookie. Deve ser informado um valor no formato unix. Ex.: time() + 3600 equivale a 1 hora.

**$path** -&gt; Pasta do servidor onde o cookie é valido. Deve ser usado ‘/’ para que o cookie seja válido em todas as pastas.

**$domain** -&gt; Domínio em que o cookie será válido.

**$secure** -&gt; Se seu valor for 1, o cookie será enviado somente se a conexão for segura (https).

**$httponly** -&gt; Se for TRUE, o cookie poderá ser acessado somente pelo protocolo http, evitando que ele seja acessado por outros meios, como JavaScript por exemplo. (obs.: nem todos os browsers suportam esta funcionalidade).

Todos os cookies, estão disponíveis através da superglobal **$\_COOKIE**. Este é um array associativo, onde o nome de cada cookie é um indíce.

Vamos a um exemplo prático:

> &lt;?php  
> /\* \*
> 
> \* Define o cookie cookie\_teste com o valor “valor\_do\_cookie\_teste”.
> 
> \* O cookie tem validade de 30 segundos e é valido em todos os diretorios do servidor.
> 
> \* E valido no dominio exemplo.com, nao sera transmitido por uma conexao segura
> 
> \* e nao deve ser acessado apenas por HTTP, permitindo seu acesso atraves
> 
> \* de outros meios, como javascript por exemplo.
> 
> \*/  
> setcookie(“cookie\_teste”, “valor\_do\_cookie\_teste”, time() + 30, ‘/’, ‘exemplo.com’, 0, FALSE);
> 
> /\* Se o cookie existir, exibe seu valor \*/  
> if (isset($\_COOKIE\[‘cookie\_teste’\])){  
> echo $\_COOKIE\[‘cookie\_teste’\];  
> }
> 
> ?&gt;

Para excluir um cookie, basta chamar a função **setcookie()** passando como parâmetro apenas o nome do cookie.

Obs.:

- Apenas o primeiro parâmetro da função setcookie é obrigatório.
- Os cookies devem ser enviados antes de qualquer outra informação ou dado.
- Se a diretiva register\_globals estiver marcada como on, o nome do cookie será uma variável dentro do script.
- A função setcookie() retorna TRUE caso seja executada com sucesso e FALSE caso ocorra algum erro. Mesmo retornando TRUE, não quer dizer que o cookie enviado foi aceito pelo usuário.

Até a próxima! 😉
---
id: 59
title: 'Entendendo os códigos de resposta HTTP'
date: '2012-01-25T16:45:56-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=59'
permalink: /entendendo-os-codigos-de-resposta-http/
categories:
    - Sysadmin
tags:
    - 'codigos http'
    - http
---

[![](http://angelitomg.com/blog/wp-content/uploads/2012/01/http.jpg "http")](http://angelitomg.com/blog/wp-content/uploads/2012/01/http.jpg)Neste post vou mostrar a voces, os principais códigos de resposta enviados pelo HTTP (sabe o famoso erro 404?). Quando solicitamos algum arquivo ou página através do protocolo HTTP, ele nos envia códigos de resposta, onde constam o status atual da nossa requisição. Eles são divididos em 5 grupos:

**1xx Informações**

**2xx Sucesso**

**3xx Redirecionamento**

**4xx Erros no cliente**

**5xx Erros no servidor**

Vamos a uma explicação basica de cada um dos códigos:

### Códigos de Informação 1xx

**100 (Continue)** – Uma parte da requisição já foi atendida, portanto o cliente deve continuar com a solicitação.

**101 (Switching Protocols)** – O cliente solicitou ao servidor para mudar os protocolos. O servidor está reconhecendo a solicitação para então executá-la.

### Códigos de Sucesso 2xx

**200 (OK)** – Arquivo encontrado. A transferência deve começar em breve.

**201 (Created)** – A solititação foi bem sucedida e um novo recurso foi criado.

**202 (Accepted)** – A solicitação foi aceita, mas ainda não foi criada.

**203 (Non-Authoritative Information)** – A solicitação foi processada mas o conteúdo devolvido pode ser de outra fonte.

**204 (No Content)** – A solicitação foi processada, porém não retornou nenhum conteúdo.

**205 (Reset Content)** – É semelhante ao código 203. A solicitação foi processada, porém não retornou conteúdo, porém o cliente deve resetar os dados enviados. (Limpar os dados de um formulário por exemplo).

**206 (Partial Content)** – O servidor processou uma requisição parcial através do método GET**.**

### Códigos de Redirecionamento 3xx

**300 (Multiple Choices)** – O servidor tem múltiplas ações disponíveis. O servidor pode escolher a melhor ação através do user agent do cliente ou apresentar uma lista para que o cliente escolha.

**301 (Moved Permanently)** – A página foi movida permanentemente para outro endereço. O servidor irá redirecionar o cliente

**302 (Found)** – O arquivo solicitado encontra-se em outro local, porém o cliente deve continuar acessando este endereço nas próximas requisições.

**303 (See Other)** – O servidor retornará esse código quando o cliente precisar fazer uma solicitação GET separadamente para outro local para obter a resposta. Para todas as outras solicitações (com exceção de HEAD), o servidor direciona automaticamente para o outro local.

**304 (Not Modified)** – Esse código diz ao cliente que a página não foi modificada desde o último acesso. Quando o servidor retorna este erro, ele não retorna o conteúdo.

**305 (Use Proxy)** – Essa resposta indica que o cliente deve utilizar um proxy para acessar o servidor. Quando o servidor retorna este código, ele também retorna o proxy que deve ser utilizado.

**306 (Unused)** – Este código de resposta não está em uso.

**307 (Temporary Redirect)** – Redirecionamento temporário. Este código é semelhante ao código 301, quando se trata de uma requisição GET ou HEAD, pois direciona o usuário diretamente ao endereço correto.

### **Códigos de Erro no Cliente 4xx**

**400 (Bad Request)** – Erro na sintaxe da solicitação.

**401 (Unauthorized)** – Você deve efetuar login para ter acesso a este conteúdo.

**402 (Payment Required)** – Código reservado para uso futuro.

**403 (Forbidden)** – Você não tem permissões para acessar este local.

**404 (Not Found)** – O arquivo requisitado não pode ser encontrado.

**405 (Method Not Allowed)** – O método especificado na requisição não é permitido.

**406 (Not Acceptable)** – A página solicitada não pode responder com as características de conteúdo enviadas na requisição.

**407 (Proxy Authentication Required)** – Autorização necessária. Semelhante ao código 401, porém o cliente deve se autenticar usando um proxy. Quando o servidor retornar este código também retornará o proxy necessário para autenticação.

**408 (Request Timeout)** – O tempo limite da solicitação foi atingido.

**409 (Conflict)** – O servidor encontrou um conflito ao completar a solicitação.

**410 (Gone)** – O recurso solicitado não está mais disponível. Semelhante ao código 404, porém é geralmente utilizado para recursos que existiam anteriormente.

**411 (Length Required)** – O servidor não aceitará a solicitação sem um campo “Content-Lenght”.

**412 (Precondition Failed)** – O servidor não atende a uma das pré-condições que o cliente coloca na solicitação.

**413 (Request Entity Too Large)** – O servidor não pode processar a solicitação porque ela é muito grande para a capacidade do servidor.

**414 (Request-URI Too Long)** – O URI (normalmente URL) é muito longo para ser processado pelo servidor.

**415 (Unsupported Media Type)** – A solicitação está em um formato incompatível com a página solicitada.

**416 (Requested Range Not Satisfiable)** – O servidor retorna esse código se a solicitação for para uma faixa não disponível para a página.

**417 (Expectation Failed)** – O servidor não pode cumprir os requisitos do campo “Expectativa” do cabeçalho da solicitação.

### **Códigos de Erro no Servidor** 5xx

**500 (Internal Server Error)** – Erro interno ocorrido no servidor. Pode ser uma falha de programação na pagina, má configuração do servidor ou sobrecarga.

**501 (Not Implemented)** – O servidor não pode completar a solicitação porque o recurso não está implementado. O servidor pode lançar este código quando não conhecer o método de solicitação, por exemplo.

**502 (Bat Gateway)** – O servidor estava operando como gateway ou proxy e recebeu uma resposta inválida do servidor superior.

**503 (Service Unavailable)** – O servidor está temporariamente indisponível.

**504 (Gateway Timeout)** – O servidor estava atuando como gateway ou proxy e não recebeu uma resposta do servidor superior a tempo.

**505 (HTTP Version Not Supported)** – A versão do protocolo HTTP do servidor não é compatível com a versão utilizada pelo cliente.

   
**Referências:**  
[w3.org  ](http://www.w3.org/Protocols/rfc2616/rfc2616-sec10.html "referencia1") [Google  ](http://support.google.com/webmasters/bin/answer.py?hl=pt-BR&answer=40132 "referencia2")
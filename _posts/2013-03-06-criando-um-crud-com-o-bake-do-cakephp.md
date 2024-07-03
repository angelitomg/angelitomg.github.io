---
id: 607
title: 'Criando um CRUD com o bake do CakePHP'
date: '2013-03-06T05:30:59-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=607'
permalink: /criando-um-crud-com-o-bake-do-cakephp/
categories:
    - CakePHP
    - PHP
    - Programação
tags:
    - bake
    - cake
    - cakephp
    - php
    - programação
---

[![cakephp_logo](http://angelitomg.github.io/wp-content/uploads/2012/12/cakephp_logo_250_trans.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/cakephp_logo_250_trans.png)Neste pequeno tutorial vou mostrar como criar um sistema CRUD (Create, Read, Update, Delete) utilizando a ferramenta **bake** disponível no framework [CakePHP](http://cakephp.org).

O [CakePHP ](http://cakephp.org)é um framework de desenvolvimento rápido para PHP. Já o **bake** é um utilitário presente no [CakePHP ](http://cakephp.org)capaz de gerar códigos de forma rápida, eliminando assim o trabalho <del>chato</del> árduo de criar CRUDs.

Vamos utilizar a versão **2.3.1** e vamos partir do princípio que você já tenha o [CakePHP](http://cakephp.org) instalado e funcionado. Vamos utilizar também o **MySQL 5.5**.

Vamos começar pelo banco de dados, iremos ter 2 tabelas: **products** e **categories**. O arquivo SQL juntamente com o código estão disponíveis para download no fim do post. Nossas tabelas e campos irão usar uma nomenclatura em inglês para seguir a regra **‘convenção sobre configuração’**, a qual o **cake** emprega muito bem. As tabelas terão a seguinte estrutura:

**Products**

- id
- category\_id
- name
- description
- price
- code

**Categories**

- id
- name

Vamos partir do princípio que você já esteja familiarizado com a linha de comando e com o padrão [MVC](http://pt.wikipedia.org/wiki/MVC). Vamos então executar o arquivo **cake.php** passando como parâmetro o comando **bake**:

`php /pasta_do_cake/app/Console/cake.php bake`

Se você ainda não tiver configurado o banco de dados, ele irá executar um wizard para a configuração. Após isto, execute o script novamente.

### **Models**

Com o script rodando, será exibido um menu. Iremos pressionar a tecla **M**, pois primeiramente iremos criar nossos **modelos**.

A primeira pergunta será sobre qual modelo queremos criar. Vamos começar pela tabela **products**. Após isto, serão feitas mais algumas perguntas, como por exemplo, quais critérios de validação cada campo precisa ter. Responda de acordo com as suas necessidades.

Logo após, será perguntado se a tabela possui alguma relação do tipo **belongsTo**, **hasMany**, **hasOne**. Responda que **SIM**. Automaticamente o **cake** irá detectar que um produto **belongsTo** uma categoria, ou seja, um produto pertence a uma categoria. Isso é detectado através do campo **category\_id** da tabela **products**, que o **cake** reconhece automaticamente como um relacionamento. Após ter confirmado a criação do modelo, será feita uma pergunta sobre se você deseja instalar o PHPUnit. No nosso tutorial, responderemos sempre **NÃO** para esta pergunta.

Faça o mesmo procedimento para a tabela **categories** (lembre-se que a tabela categories **não** terá nenhuma relação do tipo **belongsTo**, **hasMany**, **hasOne**) e após isto seus modelos estarão criados.

### **Controllers**

Agora vamos criar nossos controladores. Seguindo o mesmo procedimento de criação dos modelos, desta vez no menu vamos escolher a opção **C**, **Controller**.

Novamente você será questionado sobre qual controlador deseja criar. Vamos começar criando o controlador de **produtos**.

A próxima pergunta é se você deseja construir o controlador interativamente. Responda **NÃO**. Nas próximas perguntas, o **bake** irá perguntar se você deseja criar os métodos para listar, adicionar, editar, visualizar produtos. Vamos responder **SIM** a esta pergunta, pois ela irá criar os métodos para o nosso CRUD. A próxima pergunta será se queremos criar os métodos CRUD para a área administrativa do sistema. Iremos responder **NÃO**.

Com o controlador de **produtos** criado, vamos fazer o mesmo procedimento para o controlador de **categorias**.

### **Views**

Com os controladores e os modelos criados falta apenas criar as **visões**. Para criar as **visões**, vamos seguir o mesmo procedimento para acessar o **bake,** porém no menu vamos escolher a opção **V**, **View**.

A primeira pergunta será para qual controlador iremos criar as visões. Vamos começar pelo controlador de **produtos**.

A próxima pergunta será se desejamos criar as visões interativamente. Vamos responder **SIM**. Após isto, será perguntado se desejamos criar as visões para as operações de CRUD. Vamos responder **SIM**. Por último o **bake** irá nos perguntar se desejamos criar as visões para a área administrativa do website. Vamos responder **NÃO**.

Após isto nosso sistema estará pronto. Vamos acessá-lo a através da URL: **http://URL\_DO\_CAKE/produtcs**. Onde **products** é o nome do **controlador**.

Será exibida a pagina de listagem dos produtos. A partir de agora poderemos criar nossos produtos e categorias livremente. Note que quando você for cadastrar um produto, irá existir um campo automaticamente para a seleção de uma categoria. Isto se deve ao relacionamento **belongsTo** definido no modelo.

Os arquivos utilizados neste exemplo podem serem baixados [AQUI](https://angelitomg.github.io/downloads/crud_cakephp.zip).

Até a próxima 😉
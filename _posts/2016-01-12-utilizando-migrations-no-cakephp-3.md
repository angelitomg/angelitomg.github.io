---
id: 1167
title: 'Utilizando migrations no CakePHP 3'
date: '2016-01-12T21:44:21-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=1167'
permalink: /utilizando-migrations-no-cakephp-3/
categories:
    - 'Banco de Dados'
    - CakePHP
    - PHP
    - Programação
tags:
    - cakephp
    - migrations
---

[![cakephp_logo](http://angelitomg.github.io/wp-content/uploads/2012/12/cakephp_logo_250_trans.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/cakephp_logo_250_trans.png)Migrations é um recurso que permite ao desenvolvedor, controlar as alterações realizadas na estrutura da sua base de dados, permitindo assim, um versionamento melhor do banco de dados. No final das contas são arquivos PHP que estendem a classe **AbstractMigration** e através da API disponibilizada pelo CakePHP, constroem e modificam a base de dados.

Neste pequeno post, vou mostrar como instalar o plugin **Migrations** e executar uma migração básica. Para isto, assumo que você tenha familiaridade com o **Composer** e com o **CakePHP**.

Para instalar o plugin, o jeito mais fácil é utilizar o Composer:

`php composer.phar require cakephp/migrations "@stable"`

Logo depois da instalação, é necessário carregar o plugin. Faça isto no arquivo **bootstrap.php**:

`Plugin::load('Migrations');`

Com o plugin instalado e carregado, vamos iniciar a brincadeira!

`php bin/cake.php bake migration create_posts title:string content:text created modified name:string description:text created modified`

Quando o comando acima for executado, um arquivo será criado no diretório **/config/Migrations** da sua aplicação. Se você analisar este arquivo, verá que nada mais é do que código PHP para a criação da tabela **posts**.

Porém o comando que executamos ainda não criou a tabela. Ele apenas gerou o arquivo com o código responsável por criá-la. Para efetivamente criar a tabela, precisamos executar as migrações. Isto pode ser feito com o comando abaixo:

`php bin/cake.php migrations migrate`

Agora é só verificar o banco de dados e conferir se a tabela está lá. Mais uma característica do CakePHP provavelmente inspirada pelo Rails. 😛

Até a próxima 😉
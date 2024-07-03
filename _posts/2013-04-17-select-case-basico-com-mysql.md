---
id: 665
title: 'Select case básico com MySQL'
date: '2013-04-17T16:15:30-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=665'
permalink: /select-case-basico-com-mysql/
categories:
    - 'Banco de Dados'
    - MySQL
tags:
    - mysql
    - select
    - 'select case'
---

Neste post vamos ver um exemplo básico de utilização do comando **CASE** do **MySQL**, que possibilita determinar certas condições em consultas SQL.

No nosso exemplo vamos utilizar uma tabela muito simples, chamada **numeros**. Ela terá apenas uma coluna, chamada **valor**.

Os valores serão:

Linha 1 -&gt; **1**  
Linha 2 -&gt; **2**  
Linha 3 -&gt; **3**  
Linha 4 -&gt; **4**  
Linha 5 -&gt; **5**

Vamos então executar o seguinte comando:

`SELECT CASE WHEN valor = 1 THEN 'UM' WHEN valor = 2 THEN 'DOIS' ELSE 'NEM UM NEM DOIS' END FROM numeros`

E o resultado será:

Linha 1 -&gt; **UM**  
Linha 2 -&gt; **DOIS**  
Linha 3 -&gt; **NEM UM NEM DOIS**  
Linha 4 -&gt; **NEM UM NEM DOIS**  
Linha 5 -&gt; **NEM UM NEM DOIS**

Neste caso realizamos as verificações dos valores **1** e **2**. Caso um deles seja encontrado, retornamos uma mensagem personalizada. Caso contrário, retornamos uma mensagem padrão informando que o resultado daquela linha não é nenhum dos dois valores.

Agora é só usar a criatividade!

Até a próxima 😉
---
id: 540
title: 'Sinais, UNIX e linguagem C'
date: '2012-12-27T14:57:24-03:00'
author: Angelito
layout: post
guid: 'http://angelitomg.com/blog/?p=540'
permalink: /sinais-unix-e-linguagem-c/
categories:
    - 'Linguagem C'
    - Linux/Unix
    - Programação
    - Scripts
tags:
    - 'linguagem c'
    - linux
    - programação
    - sinais
    - unix
---

[![icone_sinais](http://angelitomg.github.io/wp-content/uploads/2012/12/sinais.png)](http://angelitomg.github.io/wp-content/uploads/2012/12/sinais.png)Sinais são mensagens enviadas a um programa em execução. Por exemplo, quando usamos o comando **kill**, na verdade estamos enviando um sinal ao programa alvo.

Além disto, podemos tratar estes sinais, assim quando um sinal for enviando poderemos realizar uma ação personalizada.

Quando um programa receber um sinal e este não for tratado, o programa executa uma ação padrão. Segue a lista com os dados dos principais sinais (para uma listagem completa, digite o comando **kill -l**):

**No** **Name** **Default Action**  **Description**  
1 SIGHUP terminate process terminal line hangup  
2 SIGINT terminate process interrupt program  
3 SIGQUIT create core image quit program  
4 SIGILL create core image illegal instruction  
5 SIGTRAP create core image trace trap  
6 SIGABRT create core image abort program (formerly SIGIOT)  
7 SIGEMT create core image emulate instruction executed  
8 SIGFPE create core image floating-point exception  
9 SIGKILL terminate process kill program  
10 SIGBUS create core image bus error  
11 SIGSEGV create core image segmentation violation  
12 SIGSYS create core image non-existent system call invoked  
13 SIGPIPE terminate process write on a pipe with no reader  
14 SIGALRM terminate process real-time timer expired  
15 SIGTERM terminate process software termination signal  
16 SIGURG discard signal urgent condition present on socket  
17 SIGSTOP stop process stop (cannot be caught or ignored)  
18 SIGTSTP stop process stop signal generated from keyboard  
19 SIGCONT discard signal continue after stop  
20 SIGCHLD discard signal child status has changed  
21 SIGTTIN stop process background read attempted from control terminal  
22 SIGTTOU stop process background write attempted to control terminal  
23 SIGIO discard signal I/O is possible on a descriptor (see fcntl(2))  
24 SIGXCPU terminate process cpu time limit exceeded (see setrlimit(2))  
25 SIGXFSZ terminate process file size limit exceeded (see setrlimit(2))  
26 SIGVTALRM terminate process virtual time alarm (see setitimer(2))  
27 SIGPROF terminate process profiling timer alarm (see setitimer(2))  
28 SIGWINCH discard signal Window size change  
29 SIGINFO discard signal status request from keyboard  
30 SIGUSR1 terminate process User defined signal 1  
31 SIGUSR2 terminate process User defined signal 2

( Tabela retirada da manpage da biblioteca **signal.h**. )

Todos os sinais podem serem tratados, exceto o sinal **9**, que é o sinal responsável por encerrar imediatamente o programa.

Para tratar um sinal, devemos utilizar a função **signal**, presente no arquivo de cabeçalho **signal.h**.

Para tratar o sinal **2** (este sinal é emitido quando o usuário pressiona **CTRL+C**), por exemplo, utilizamos o seguinte comando (dentro do código fonte do nosso programa em C):

`signal(2, aloMundo);`

Assim, quando o usuário pressionar **CTRL+C**, ou seja, quando o programa receber o sinal **2**, a função **aloMundo** será executada.

Além disto, podemos passar sinais personalizados através do comando **kill**. Para passar o sinal **14** para um programa, por exemplo, basta obter o ID do processo (**PID**) e utilizar o comando **kill**:

`kill -14 8192`

No exemplo acima, o programa com o **PID** **8192** irá receber o sinal **14**. Um exemplo completo pode ser baixado [AQUI](https://angelitomg.github.io/downloads/sinais.c).

O programa de exemplo trata o sinal de quando o usuário pressiona **CTRL+C** (sinal **2**), portanto não é possível finalizá-lo através deste comando. Para finalizá-lo obtenha o **PID** do programa (exibido no início da execução do programa) e digite no terminal o comando:

`kill -9 9800`

Onde **9800** é o **PID** do programa. O programa irá receber o sinal **9**, que é o sinal responsável por encerrar instantaneamente um programa.

Até a próxima 😉
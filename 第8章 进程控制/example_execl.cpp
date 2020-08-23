//
// Created by winter on 2020/8/22.
// example: 让子进程通过exec函数运行python代码打印hello world
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
    pid_t pid;

    puts("Begin!");
    fflush(NULL);

    pid = fork();
    if(pid < 0){
        perror("fork()");
        exit(1);
    }
    if(pid == 0){
        execl("/usr/bin/python3", "python3", "/home/winter/code/python3/test/main.py", NULL);
        perror("execl()");
        exit(1);
    }

    wait(NULL);
    puts("End!");
    exit(0);
}

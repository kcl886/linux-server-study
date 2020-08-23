//
// Created by winter on 2020/8/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    pid_t pid;
    printf("[%d]:Begin!\n", getpid());
    fflush(NULL); //"!!!刷新缓冲区"

    pid = fork();
    if(pid<0){
        perror("fork()");
        exit(1);
    }
    if(pid == 0){
        printf("[%d]:Child is working\n",getpid());
    }
    else{
        printf("[%d]:Parent is working\n",getpid());
    }

    printf("[%d]:End!\n", getpid());
    exit(0);
}

//
// Created by winter on 2020/8/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#define LEFT 30000000
#define RIGHT 30000200

int main(){
    pid_t pid;

    for(int i=LEFT;i<=RIGHT;i++){
        pid = fork();
        if(pid<0){
            perror("fork()");
            exit(1);
        }
        if(pid == 0){
            bool flag = true;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    flag= false;
                    break;
                }
            }
            if(flag)printf("[%d]:%d is a primer\n", getpid(), i);
            //sleep(1000);//子进程睡眠，父进程正常退出，此时子进程变为孤儿进程，托孤给Init。
            exit(0);//必须要有
        }
    }
    //sleep(100);//父进程睡眠，子进程正常结束，父进程没有及时回收资源，此时子进程为僵尸进程。
    exit(0);
}

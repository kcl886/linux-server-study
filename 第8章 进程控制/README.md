## 进程标识符
* 类型 pid_t
* ps命令
* getpid();getppid();

## 进程的产生
* init进程：所有进程的祖先，pid=1  
* fork()后子进程和父进程的区别：
  * fork的返回值不一样  
  * pid不同  
  * ppid也不同  
  * 未决信号和文件锁不继承
  * 资源利用量清0 
* 由调度器的调度策略来决定哪个进程先运行
* fflush()刷新缓冲区的重要性
* vfork()  

## 进程的消亡及资源释放
 * wait(): 阻塞
 * waitpid()
 * waitid()

## exec函数族
* execl()
* execlp()
* execle()
* execv()
* execvp()
* execvpe()
* exec执行前需fflush()刷新流缓冲区
* glob()
* 实现一个简单的可执行外部命令的shell


## 用户权限及组权限(u+s,g+s)
* linux下的3种UID
  * real user uid(RUID): 用于在系统中标识一个用户是谁，当用户使用用户名和密码成功登录后一个UNIX系统后就唯一确定了他的RUID
  * effective user uid(EUID): 用于系统决定用户对系统资源的访问权限，通常情况下等于RUID
  * saved user uid(SUID): 在执行程序时包含了有效用户ID的副本
* getuid(),geteuid()
* getgid(),getegid()
* setuid(),setgid(),setreuid(),setregid()
* seteuid(),setegid()



## system函数
## 进程会计
## 进程时间
## 守护进程
## 系统日志
 
 
 
 
	

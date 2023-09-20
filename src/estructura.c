include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(void)
{
	pid_t pid; // inicializo la variable pid con el tipo pid_t (pid type)]

	if ((pid=fork()) < 0){
		printf("ERROR");
		exit(-1);
	}else if((pid=fork())>0){
		if((pid=fork())==0){
			printf("Soy el hijo, PID: %d - PPID: %d", getpid(), getppid());
		}else{
			printf("Soy el nieto, PID: %d - PPID: %d", getpid(), getppid());
		}
	}
	
		if ((pid=fork()) < 0){
			printf("ERROR");
			exit(-1);
		}else if((pid=fork())>0){
			printf("Soy el hijo, PID: %d - PPID: %d", getpid(), getppid());
			if ((pid=fork()) == 0){
				printf("Soy el nieto, PID: %d - PPID: %d", getpid(), getppid());
			}
		}else{
			childpid = wait(NULL);
		}
	}
	exit(0)
}

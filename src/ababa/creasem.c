# include <stdio.h>
# include <stdlib.h>
# include <sys/sem.h>
# include <sys/ipc.h>
# include <unistd.h>

int main(int argc, char ** argv)
{
	int semid = semget(0xa, 3, IPC_CREAT | IPC_EXCL | 0600);
	printf("semid = %d\n", semid);
	



	exit(0);
}

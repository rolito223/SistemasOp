# include <stdio.h>
# include <stdlib.h>
# include <sys/shm.h>
# include <sys/ipc.h>
# include <unistd.h>
# include <sys/types.h>


int main(int argc, char ** argv)
{
	int shmid = shmget(0xa, 0, 0);
	printf("shmid = %d\n", shmid);
	int * dir = shmat(shmid,0,0);
	*dir = 0;
	printf("dir %p\n %d\n",dir, *dir);


	exit(0);
}

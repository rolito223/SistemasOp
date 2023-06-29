# include <stdio.h>
# include "operipc.h"
# include <sys/shm.h>
# include <sys/shm.h>
int main(int argc, char ** argv)
{
	int semid = semget(0xa, 0, 0);
	int shmid = shmget(0xa, 0, 0);
	int * dir = shmat(shmid,0,0);

	printf ("semid = %d\n", semid);
	printf ("shmid = %d\n", semid);
	
	while (1)
	{
		//Seccion entrada		
		int ret = P(semid, 1);
		//Seccion Critica
		printf ("pb -->[%d]\n", ret);
		(*dir)++;
		//Seccion restante
		ret = V(semid, 0);
		printf ("pb -->[%d]\n", ret);
		
	}

	exit(0);
}

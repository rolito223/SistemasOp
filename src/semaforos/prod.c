# include <stdio.h>
# include <stdlib.h>
# include "operipc.h"
# include <sys/shm.h>


#define BUFFER_SIZE = 5


int main(int argc, char ** argv)
{
	int in = 0;
	char letra = 'a';

	int shmbufid = shmget(0xa, 0, 0);
	int shmcouid = shmget(0xb, 0, 0);
	int semid = semget(0xa, 0, 0);
	
	printf ("semid = %d\n", semid);
	printf("shmbufid = %d\n", shmbufid);
	printf("shmbufuid = %d\n", shmbufuid);
	
	char * dirbuf = (char *) shmat(shmbufid, 0, 0);
	int * dircou = (int *) shmat(shmcouid, 0, 0);

	while (1)
	{
		while (*dircou == BUFFER_SIZE);
		
		P(semid, 0);
		(*dircou)++;
		*(dirbuf+in) = letra;	
		V(semid, 0);
		in = (in + 1) % BUFFER_SIZE;

		if (letra == 'z')
			letra = 'a';
		else
			letra++;
	}

	exit(0);
}

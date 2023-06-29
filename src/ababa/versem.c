# include <stdio.h>
# include <stdlib.h>
# include <sys/sem.h>
# include <sys/ipc.h>
# include <unistd.h>

int main(int argc, char ** argv)
{
	int semid = semget(0xa, 0,0);
	printf("semid = %d\n", semid);
	printf ("sem 0 = %d\n", semctl(semid, 0, GETVAL));
	printf ("sem 1 = %d\n", semctl(semid, 1, GETVAL));
	
	exit(0);
}

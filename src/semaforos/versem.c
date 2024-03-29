# include <stdio.h>
# include <stdlib.h>
# include <sys/sem.h>
# include <sys/ipc.h>
# include <unistd.h>

int main(int argc, char ** argv)
{
	int semid = semget(0xa, 3, IPC_CREAT | IPC_EXCL | 0600);
	printf("semid = %d\n", semid);

	printf ("sem 0 = %d\n", semctl(semid, 0, GETVAL));
	printf ("sem 1 = %d\n", semctl(semid, 1, GETVAL));
	printf ("sem 2 = %d\n", semctl(semid, 2, GETVAL));


	exit(0);
}

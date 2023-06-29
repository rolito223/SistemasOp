# include <unistd.h>
# include <sys/ipc.h>
# include <sys/sem.h>


int P(int semid, int semnum)
{
	struct sembuf sem;
	sem.sem_num = semnum;
	sem.sem_op = -1;
	sem.sem_flg = 0;
	return semop(semid, &sem, 1);
}

int V(int semid, int semnum)
{
	struct sembuf sem;
	sem.sem_num = semnum;
	sem.sem_op = 1;
	sem.sem_flg = 0;
	return semop(semid, &sem, 1);
}

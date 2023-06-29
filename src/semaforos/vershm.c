# include <stdio.h>
# include <stdlib.h>
# include <sys/shm.h>
# include <sys/ipc.h>
# include <unistd.h>

int main(int argc, char ** argv)
{
	int shmbufid = shmget(0xa, 0,0);
	int shmcouid = shmget(0xb, 0,0);
	printf("shmbufid = %d\n", shmbufid);
	printf("shmcouid = %d\n", shmcouid);
	
	char * dirbuf = (char *) shmat(shmbufid, NULL, 0);
	int * dircou = (int *) shmat(shmcouid, NULL, 0);
	char * dirbufaux = dirbuf;

	int i = 0;
	while(i<5)
	{
		*dirbufaux = '.';
		i++;
		dirbufaux++;
	}

	printf("dirbuf = %s\n", dirbuf);
	printf("dircou = %d\n", *dircou);

	*dircou = 0;


	shmdt(dirbuf);
	shmdt(dircou);

	exit(0);
}

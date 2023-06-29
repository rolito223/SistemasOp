# include <stdio.h>
# include <stdlib.h>
# include <sys/shm.h>
# include <sys/ipc.h>
# include <unistd.h>

int main(int argc, char ** argv)
{
	int shmbufid = shmget(0xa, sizeof(int), IPC_CREAT | IPC_EXCL | 0600);

	printf("shmbufid = %d\n", shmbufid);
	exit(0);
}

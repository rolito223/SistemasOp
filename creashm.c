# include <stdio.h>
# include <stdlib.h>
# include <sys/shm.h>
# include <sys/ipc.h>
# include <unistd.h>

int main(int argc, char ** argv)
{
	int shmbufid = shmget(0xa, 5, IPC_CREAT | IPC_EXCL | 0600);
	int shmbufuid = shmget(0xb, 5, IPC_CREAT | IPC_EXCL | 0600);
	printf("shmbufid = %d\n", shmbufid);
	printf("shmbufuid = %d\n", shmbufuid);
	exit(0);
}
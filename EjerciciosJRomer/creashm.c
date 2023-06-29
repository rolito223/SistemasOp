#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <stdlib.h>

int main(void)
{
  int shmid = shmget(0xa,1,IPC_CREAT|IPC_EXCL|0600) ;
  printf("shmid = %d\n",shmid);
  exit(0);
}


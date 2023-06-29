#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <stdlib.h>

int main(void)
{
  int shmid = shmget(0xa,0,0) ;
  printf("shmid = %d\n",shmid);
  char * dir = (char *) shmat(shmid,0,0) ;
  printf("shmid = %c\n",*dir);
  shmdt(dir) ;
  exit(0);
}


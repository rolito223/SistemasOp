#include <stdio.h>
#include <sys/sem.h>
#include <sys/ipc.h>
#include <stdlib.h>

int main(void)
{
  int semid = semget(0xa,0,0) ;
  printf("semid = %d\n",semid);
  printf("Sa = %d\n",semctl(semid,0,GETVAL)) ;
  printf("Sb = %d\n",semctl(semid,1,GETVAL)) ;
  printf("Sc = %d\n",semctl(semid,2,GETVAL)) ;
  exit(0);
}


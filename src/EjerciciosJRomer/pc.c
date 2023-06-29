#include <stdio.h>
#include <stdlib.h>
#include "operIPC.h"
#include <unistd.h>
#include <sys/shm.h>

int main(void)
{
  int semid = semget(0xa,0,0) ;
  int shmid = shmget(0xa,0,0) ;
  printf("semid = %d  shmid = %d\n",semid,shmid);
  char * dir = (char *) shmat(shmid,0,0) ;
  while(1) 
  {
     P(semid,2) ;  // wait sobre Sc
      if ((*dir) <= 'z') 
      {
        printf("pc valor en shm %c\n",*dir);
        (*dir)++ ;
      }
      else break ;
     V(semid,0) ; // signal sobre Sa
  } 
  V(semid,0) ; // signal sobre Sa
  shmdt(dir) ;
  exit(0);
}


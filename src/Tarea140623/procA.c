#include <stdio.h>
#include <stdlib.h>
#include "operIPC.h"
#include <unistd.h>
#include <sys/shm.h>
 │
int main(void)
{
  int semid = semget(0xa,0,0) ;
  int shmid = shmget(0xa,0,0) ;
  printf("semid = %d  shmid = %d\n",semid,shmid);
  char * dir = (char *) shmat(shmid,0,0) ;
  while(1)
  {
     P(semid,0) ;  // wait sobre Sa
      if ((*dir) <= 'z')
       {
        printf("pa valor en shm %c\n",*dir);
        (*dir)++ ;
       }
     else break ;
     V(semid,1) ; // signal sobre Sb
  }
  V(semid,1) ; // signal sobre Sb
  shmdt(dir) ;
  exit(0);
}

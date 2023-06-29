#include <sys/sem.h>
#include <sys/ipc.h>

void P(int semid, int sem)  //este es el wait sobre semaforos
{
  struct sembuf buf ;
  buf.sem_num = sem ; 
  buf.sem_op  = -1 ;
  buf.sem_flg = 0 ;
  semop(semid,&buf,1) ;
}


void V(int semid, int sem)  //este es el signal sobre semaforos
{
  struct sembuf buf ;
  buf.sem_num = sem ; 
  buf.sem_op  = 1 ;
  buf.sem_flg = 0 ;
  semop(semid,&buf,1) ;
}


















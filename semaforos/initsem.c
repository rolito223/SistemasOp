# include <stdio.h>
# include <stdlib.h>
# include <sys/sem.h>
# include <sys/ipc.h>
# include <unistd.h>

int main(int argc, char ** argv)
{
	int semid = semget(0xa, 0, 0);
	printf("semid = %d\n", semid);
	
	//Binario de mutua exclusión
	semctl(semid, 0, SETVAL, 1);
	//Contador del productor, solucion espera activa u ocupada del productor
	semctl(semid, 1, SETVAL, 5);
	//Contador del consumidor, solucion espera activa u ocupada del consumidor
	semctl(semid, 2, SETVAL, 5);


	exit(0);
}

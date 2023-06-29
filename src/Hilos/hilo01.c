#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <ctype.h>


void funhilo1(void);
void funhilo2(void);

pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t m2 = PTHREAD_MUTEX_INITIALIZER;

char letra = 'a';
int main(int argc, char * argv[]) {
	pthread_mutex_lock(&m2);
	pthread_mutex_lock(&m1);
	pthread_t hilo1, hilo2;
	pthread_create(&hilo1, NULL, (void*)&funhilo1, NULL); //se podria pasar m1 y m2 como var en el ultimo param
	pthread_create(&hilo2, NULL, (void*)&funhilo2, NULL);
	printf("Identificador de hilo 1 %lu \n", hilo1);	
	printf("Identificador de hilo 2 %lu \n", hilo2);	
	pthread_mutex_unlock(&m1);
	pthread_join(hilo1,NULL);
	pthread_join(hilo2,NULL);
	printf("\nFIN ABCEDARIO SINC\n");
	exit(0);
}
 

void funhilo1(void){
	while(letra <'z'){
		pthread_mutex_lock(&m1);
		printf("%c \n", letra);
		letra ++;
		pthread_mutex_unlock(&m2);
	}
	pthread_exit(NULL);
}

void funhilo2(void){
        while(letra <'z'){
		pthread_mutex_lock(&m2);
		printf(" %c \n", toupper(letra));
                letra ++;	
		pthread_mutex_unlock(&m1);
	}
  	pthread_exit(NULL);
}



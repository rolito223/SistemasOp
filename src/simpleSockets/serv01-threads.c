// Creado por Andres Orlando en la clase de J C Romero.
// Servidor socket para el protocolo TCP/IP

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <string.h>
# include <signal.h>
# include <sys/wait.h>
# include <pthread.h>

// void hand_sigchld(int);
void hand_sigarlm(int);
void thread(void *arg);



void funhilo(buffer){
	do{
		char buffer[1024];
		memset(buffer,1024,'\n');
		int byrecv = recv(sockCli, buffer, 1024, 0);
		buffer[byrecv] = '\n';
		printf("Mensaje recibido: %s\n", buffer);
		int  oldfd = dup(1);
		dup2(sockCli, 1);
		system(buffer);
		dup2(oldfd,1);
		close(oldfd);
		
		// system(buffer);
		
		char mensajeSend[1024] = "Hola cliente";
		memset(buffer,1024,'\n');
		strcpy(mensajeSend,"MensajeEnviado");
		int bysend = send(sockCli, mensajeSend, strlen(mensajeSend), 0);
		printf("Mensaje enviado: %s\n", mensajeSend);
		
		// byrecv = recv(sockCli, buffer, 1024, 0);
		// buffer[byrecv] = '\n';
	}while (strncmp(buffer,"fin",3));
}

int main(int argc, char * argv []){
	
	int longsockaddresin;
	int sockSer, sockCli;
	struct sockaddr_in mistruc, strucCli;

	// signal(SIGCHLD,(void *)hand_sigchld);
	signal(SIGALRM,(void *)hand_sigarlm);

	sockSer = socket(AF_INET, SOCK_STREAM, 0);	
	printf ("sockSer = %d\n", sockSer);
	
	mistruc.sin_family = AF_INET;
	mistruc.sin_port = htons(6666);
	mistruc.sin_addr.s_addr = inet_addr("172.17.203.139");
	memset(mistruc.sin_zero,8,0);
	
	longsockaddresin = sizeof(struct sockaddr_in);
	int bin = bind(sockSer, (struct sockaddr *)&mistruc, longsockaddresin);
	printf ("bin = %d\n", bin);
	if (bin == -1)
	{
		printf("Error al bindear\n");
		exit(0);
	}
	int sala = listen (sockSer, 20);
	printf("sala = %d\n", sala);

	alarm(5);
	while(1){
		printf("Esperando cliente...\n");
		int sockCli = accept(sockSer, (struct sockaddr *)&mistruc, &longsockaddresin);
		if (sockCli != -1)
		{
			pthread_t h1 = pthread_create(&h1, NULL, thread, sockCli);
			
			
			funhilo();
		}
		else{
			printf("Error al conectar\n");
			exit(0);
		}
		
	}
	close(sockSer);
	exit (0);
}

// void hand_sigchld(int sig){
// 	printf("Se ha recibido la señal SIGCHLD\n");
// 	pid_t pid;
// 	pid = wait(0);
// 	printf("Se ha terminado el proceso hijo con pid = %d\n", pid);
// }

void hand_sigarlm(int sig){
	printf("Se ha recibido la señal SIGARLM\n");
	pid_t pid;
	while(pid = waitpid(-1,0,WNOHANG) != -1){
		printf("Se ha terminado el proceso hijo con pid = %d\n", pid);
	}
	alarm(5);
}

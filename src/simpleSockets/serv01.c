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

int main(int argc, char * argv []){
	
	int longsockaddresin;
	int sockSer, sockCli;
	struct sockaddr_in mistruc, strucCli;

	sockSer = socket(AF_INET, SOCK_STREAM, 0);	
	printf ("sockSer = %d\n", sockSer);
	
	mistruc.sin_family = AF_INET;
	mistruc.sin_port = htons(6666);
	mistruc.sin_addr.s_addr = inet_addr("172.17.203.139");
	memset(mistruc.sin_zero,8,0);
	
	longsockaddresin = sizeof(struct sockaddr_in);
	int bin = bind(sockSer, (struct sockaddr *)&mistruc, longsockaddresin);
	printf ("bin = %d\n", bin);

	int sala = listen (sockSer, 20);
	printf("sala = %d\n", sala);

	while(1){
		printf("Esperando cliente...\n");
		int sockCli = accept(sockSer, (struct sockaddr *)&mistruc, &longsockaddresin);
		if (sockCli != -1)
		{
			char buffer[1024];
			memset(buffer,1024,'\n');
			int byrecv = recv(sockCli, buffer, 1024, 0);
			buffer[byrecv] = '\n';
			printf("Mensaje recibido: %s\n", buffer);
			char mensajeSend[1024] = "Hola cliente";
			strcpy(mensajeSend,"MensajeEnviado");
			int bysend = send(sockCli, mensajeSend, strlen(mensajeSend), 0);
			printf("Mensaje enviado: %s\n", mensajeSend);
			close(sockCli);
		}
		else{
			printf("Error al conectar\n");
		}
		
	}
	close(sockSer);
	exit (0);
}



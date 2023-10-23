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
	int sockCli;
	struct sockaddr_in mistruc;

	sockCli = socket(AF_INET, SOCK_STREAM, 0);	
	printf ("sockCli = %d\n", sockCli);
	
	mistruc.sin_family = AF_INET;
	mistruc.sin_port = htons(6666);
	mistruc.sin_addr.s_addr = inet_addr("172.17.203.139");
	memset(mistruc.sin_zero,8,0);
	
	printf("Esperando server...\n");
	int con = connect(sockCli, (struct sockaddr *)&mistruc, sizeof(struct sockaddr));
	if (con != -1)
	{

		char mensajeRec[1024];
		memset (mensajeRec, 1024, '\0');
		int byrec = recv(con, mensajeRec, 1024, 0);
		mensajeRec[byrec] = '\0';
		printf("Mensaje recibido: %s\n", mensajeRec);

		char mensajeEnv[1024];
		memset (mensajeEnv, 1024, '\0');
		strcpy(mensajeEnv, "Hola mundo");
		int byenv = send(con, mensajeEnv, strlen(mensajeEnv), 0);
		

	}
	else{
		printf("Error al conectar\n");
	}
		
	exit (0);
}



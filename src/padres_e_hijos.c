# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void main(int argc, char * argv[])
{
	if (argv[1] == NULL)
	{
		printf("Error: Debe ingresar un numero de hijos\n");
		exit(1);
	}
	pid_t pid;
	int n = atoi(argv[1]);
	int i;
	for (i = 0; i<n; i++)
	{
		pid  = fork();
		if (pid >0) break;
	}
	printf("Padre %d saliendo ---- creando hijo %d\n", getpid(),pid);
	exit(0);
}

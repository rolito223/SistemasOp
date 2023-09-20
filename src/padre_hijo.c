#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)  
{
            fork();
            fork();
            fork();
            printf("Soy  el proceso %d mi padre es %d\n", getpid(),getppid());
            exit(0);
 }


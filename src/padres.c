#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main()
{
  fork();
  printf("Hola mundo\n");
  exit(0);
}


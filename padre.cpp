#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main (int argc, char *argv[]){
	int child_status;
	
 	pid_t child = fork();

    if (!child){

	
	execlp("./hijo", "hijo", NULL);
	}

	wait(&child_status);

	system("cat hola.txt");


	return 0;
}

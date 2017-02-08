#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	//iterator
	int argu;
	//print all the cmd arguments
	for(argu = 0; argu < argc; argu++)
		printf("%s ", argv[argu]);
	printf("\n");
	
	return 0;
}

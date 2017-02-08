#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	//iterator
	int argu;
	//print out all the data
	for(argu = 1; argu < argc; argu++){
		printf("%d ", atoi(argv[argu]));
	}
	printf("\n");
	
	//size of my data collection
	int dataSize = argc - 1;
	/*Don't do this.
	int data[dataSize];
	*/
	//allocate space for my data collection
	int *data = (int*)malloc(dataSize * sizeof(int));
	//parse the data from string to integer, and load it into my data collection
	for(argu = 1; argu < argc; argu++)
		data[argu - 1] = atoi(argv[argu]);
	int i, sum = 0;
	//print the value, and add to sum
	for(i = 0; i < dataSize; i++){
		printf("%d ", data[i]);
		sum += data[i];
	}
	//print sum
	printf("\nSum: %d\n", sum);
	
	//always free your memory
	free(data);
	
	return 0;
}

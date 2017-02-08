#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	//size (total numer of value) of my data
	int dataSize = argc - 1;
	int i;
	float sum = 0, avg = 0;
	
	//parse strings to float values and add them to sum
	for(i = 1; i < argc; i++)
		sum += atof(argv[i]);
	
	//find average
	avg = sum / dataSize;
	
	//print average
	printf("Sum: %f Average: %f\n", sum, avg);
	printf("Sum: %.3f Average: %.3f\n", sum, avg);
	
	
	return 0;
}

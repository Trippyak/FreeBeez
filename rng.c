#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//seed a random number
	srand(time(0));
	int set = 0;
	//can be set though cmd args
	int max = 100, maxDataSize = 50, maxValue = 20;
	int dataSize;
	int i;	
	
	//display the number of data sets
	printf("%d\n", max);
	
	//generate random data sets
	for(set; set < max; set++){
		//make a ransom data set size from 1 -> 50
		dataSize = (rand()%maxDataSize) + 1;
		printf("%d ", dataSize);
		//make random data values from 1 -> 20
		for(i = 0; i < dataSize; i++)
			printf("%d ", ((rand()%maxValue) + 1));
		printf("\n");
	}
	
	return 0;
}

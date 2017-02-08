#include <stdio.h>
#include <stdlib.h>

int main(){
	//read in the number of data sets we have
	int numSets;
	scanf("%d", &numSets);
	
	float sum = 0, avg = 0;
	int set;
	float dataSize, valueLoc, value;
	//run though all the data sets
	for(set = 0; set < numSets; set++){
		//see how 'large' the data set is
		scanf("%f", &dataSize);
		//get and sum all the values
		for(valueLoc = 0; valueLoc < dataSize; valueLoc++){
			scanf("%f", &value);
			sum += value;
		}
		//print the average
		printf("%f\n", sum / dataSize);
		//clear the average for the next data set
		sum = 0;
	}
	printf("\n");
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
	//NUll does not store the time
	srand(time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());

	//prints 0 - 9 
	printf("%d\n", rand()% 10 + 1);
	printf("%f\n", (float) rand()/RAND_MAX);
	//RAND_MAX gives a range from 0 to 1 with floats 
	return 0;	
} 
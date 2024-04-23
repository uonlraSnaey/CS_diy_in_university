#include <stdio.h>
 
# define SIZE 50

int main()
{
	int counter; 
    int events[SIZE];
	for (counter = 0;  counter < SIZE; counter++)
	{   
		events[counter] = 2 * counter;
	}

 	printf("The final counter is %d", counter);
	return 0;
}
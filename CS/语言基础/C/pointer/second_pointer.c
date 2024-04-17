#include <stdio.h>

int main(void)
{
	/*
	int* p;
	int* q;
	int i= 5,j = 10;
	p = &i;
	q = &i;

	int** n;

	 n = &p;

	//p = *q;

	printf("%d\t", p);
	printf("%d\n", *p);

	printf("%d\t", q);
	printf("%d\n", *q);

	printf("%d\t",n);
	printf("%d\t", *n);
	printf("%d\n", **n);
	*/

	int i = 0, j = 0;
	int* p;

	int arr[] = { 1,2,3,4,5,6,777 };

	p = &arr[0];

	for(i = 0; i < 7; i++)
	{
		printf("%d\t", *p);
		p++;
	}
		


	
	return 0;
}
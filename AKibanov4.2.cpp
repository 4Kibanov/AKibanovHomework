#include <stdio.h>

main()
{
	int mas[7];
	printf("Enter 7 elements of the array:\n");
	for(int i=0;i<7;i++)
	{
		scanf("%i",&mas[i]);
	}
	for(int i=0;i<7;i++)
	{
		printf("%2i ",mas[i]);
	}
	
	int n=0;
	int array[100];
	while ((n<1)||(n>100))
	{
		printf("\nEnter the number of array elements from 1 to 100 inclusive.\n");
		scanf("%i",&n);
	}
	printf("Enter the values of the array.\n");
	for(int i=0;i<n;i++)
	{
		scanf("%i",&array[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%2i ",array[i]);
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


main()
{
	srand(time(NULL));
	int min=-2;
	int max=7;
	
	int mas[100][100];
	int n=0;
	int m=0;
	while ((n<1)||(n>100))
	{
		printf("Enter the number of rows of the array from 1 to 100:\n");
		scanf("%i",&n);
	}
	while ((m<1)||(m>100))
	{
		printf("Enter the number of columns in the array from 1 to 100:\n");
		scanf("%i",&m);
	}

	for (int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			mas[j][i]=min+rand()%(max-min+1);
		}
	}
	printf("\nThe resulting array:\n");
	for (int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			printf("%3i ",mas[j][i]);
		}
		printf("\n");
	}
}

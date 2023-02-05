#include<stdio.h>
#include<stdlib.h>


main()
{
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
	printf("Enter the values of a two-dimensional array by rows:\n");
	for (int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%i",&mas[j][i]);
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

	int k=m;
	if(n>k)
	{
		k=n;
	}
	int mas2[100][100];
	for(int j=0;j<k;j++)
	{
		for(int i=0;i<k;i++)
		{
			mas2[j][i]=mas[i][j];
		}
	}
	printf("Array after main diagonal inversion:\n");
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%3i ",mas2[j][i]);
		}
		printf("\n");
	}
}

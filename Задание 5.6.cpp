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
	printf("\nArray after sorting by value:\n");
	bool f1;
	for(int i=0;i<m;i++)
	{
		f1=true;
		while(f1)
		{
			f1=false;
			for(int j=0;j<n-1;j++)
			{
				if(mas[i][j]>mas[i][j+1])
				{
					int a=mas[i][j];
					mas[i][j]=mas[i][j+1];
					mas[i][j+1]=a;
					f1=true;
				}
			}
		}
	}
	for (int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			printf("%3i ",mas[j][i]);
		}
		printf("\n");
	}
	
	printf("\nArray after swapping out the first and last column:\n");
	for(int i=0;i<n;i++)
	{
		int b=mas[i][0];
		mas[i][0]=mas[i][m-1];
		mas[i][n-1]=b;
	}
	for (int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			printf("%3i ",mas[j][i]);
		}
		printf("\n");
	}
}

#include <stdio.h>

main()
{
	int n=0;
	int mas[100];
	while ((n<1)||(n>100))
	{
		printf("Enter the number of array elements from 1 to 100 inclusive.\n");
		scanf("%i",&n);
	}
	printf("Enter the values of the array.\n");
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%4i",mas[i]);
	}
	printf("\n");
	bool f1=true;
	int ch=0;
	while(f1)
	{
		f1=false;
		for(int i=0;i<n-1;i++)
		{
			if(mas[i]>mas[i+1])
			{
				int z=mas[i];
				mas[i]=mas[i+1];
				mas[i+1]=z;
				f1=true;
			}
		}
		ch++;
	}
	for(int i=0;i<n;i++)
	{
		printf("%4i",mas[i]);
	}
}

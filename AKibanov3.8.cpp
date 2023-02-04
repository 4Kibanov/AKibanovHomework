#include<stdio.h>

main()
{
	int numbers, n, min, max, sum;
	printf("Enter the number of values:\n");
	scanf("%i",&numbers);
	printf("Enter the first number:\n");
	scanf("%i", &n);
	min=n;
	max=n;
	sum=n;
	for(int i=0;i<numbers-1;i++)
	{
		printf("Enter the next number:\n");
		scanf("%i",&n);
		if(min>n)
		{
			min=n;
		}
		if (max<n)
		{
			max=n;
		}
		sum=sum+n;
	}
	printf("Results:\n");
	printf("MIN number=%i\n",min);
	printf("MAX number=%i\n",max);
	printf("Sum of numbers=%i\n",sum);
	printf("Arithmetic mean=%f\n",((float)sum / (float)numbers));
}

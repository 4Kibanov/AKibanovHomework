#include <stdio.h>

main()
{
	int n=0;
	int mas[100];
	while((n<1)||(n>100))
	{
		printf("Enter the number of array elements from 1 to 100 inclusive.\n");
		scanf("%i",&n);
	}
	printf("Enter the values of the array.\n");
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i]);
	}

    int min, max, sum;    
    min=max=mas[0];
    sum=0;
    for(int i=0;i<n;i++)
    {
        if (min>mas[i])
        {
            min=mas[i];
        }
        if (max<mas[i])
        {
            max=mas[i];
        }
        sum+=mas[i];
    }    
	printf("Results:\n");
	printf("MIN number=%i\n",min);
	printf("MAX number=%i\n",max);
	printf("Sum of numbers=%i\n",sum);
	printf("Arithmetic mean=%f\n",((float)sum/(float)n));
}

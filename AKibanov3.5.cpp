#include <stdio.h>

main()
{
	int hello=0;
	while(hello<9)
	{
		printf("Hello\n");
		hello++;
	}
	
	int i=0;
	printf("Numbers 0 to 14:\n");
	while(i<15)
	{
		printf("%i\n",i++);
	}
	int j=1;
	printf("Odd numbers 0 to 14:\n");
	while(j<15)
	{
		printf("%i\n",j);
		j=j+2;
	}
	
	int n=5;
	int sum=0;
	printf("Sum of numbers 5 to 15:\n");
	while(n<=15)
	{
		sum=sum+n++;
	}
	printf("%i",sum);
}

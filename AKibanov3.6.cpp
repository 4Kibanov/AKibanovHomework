#include <stdio.h>

main()
{
	printf("Multiplication table for number 5:\n");
	for(int i=1;i<=10;i++)
	{
		printf("5*%i=%i\n",i,i*5);
	}
	
	int a=0;
	int b=7;
	printf("Try to guess the correct number!\n");
	while(a!=b)
	{
		printf("Enter the number:\n");
		scanf("%i",&a);
		if(a>b)
		{
			printf("Your number is greater.\n");
		}
		else
		{
			if(a<b)
			{
				printf("Your number is less.\n");
			}
		}
		if(a>10)
		{
			printf("Your number is greater than 10.\n");
		}
		else
		{
			if(a<10)
			{
				printf("Your number is less than 10.\n");
			}
			else
			{
				printf("Your number is equal 10.\n");
			}
		}
		if(a%2==0)
		{
			printf("Your number is divisible by 2.\n");
		}
		else
		{
			printf("Your number is not divisible by 2.\n");
		}
		if(a%3==0)
		{
			printf("Your number is divisible by 3.\n");
		}
		else
		{
			printf("Your number is not divisible by 3.\n");
		}
	}
	printf("You guessed the correct number!");
}


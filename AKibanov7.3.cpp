#include <math.h>
#include <stdio.h>

int square1(int n) 
{
	int root=sqrt(n);
	return n==root*root;
}

void square2(int n, int *result) 
{
	int root=sqrt(n);
	if (n==root*root) 
	{
    	*result=root;
	} 
	else 
	{
    	*result=0;
	}
}

void square3(int n, int &result)
{
	int root=sqrt(n);
	if (n==root*root) 
	{
    	result=root;
	} 
	else
	{
    	result=0;
	}
}

int main()
{
	int x=9,y=14,z=25;
	printf("Determine if the number is a square. 1=Yes, 0=No:\n");
	printf("Is %d a square? %d\n", x, square1(x));
	printf("Is %d a square? %d\n", y, square1(y));
	printf("Is %d a square? %d\n", z, square1(z));

	int result;
	printf("\nIf 0 => does not exist\n");
	square2(x, &result);
	printf("The square root of %d is %d\n",x,result);
	square2(y, &result);
	printf("The square root of %d is %d\n",y,result);
	square2(z, &result);
	printf("The square root of %d is %d\n",z,result);

	square3(x, result);
	printf("The square root of %d is %d\n",x,result);
	square3(y, result);
	printf("The square root of %d is %d\n",y,result);
	square3(z, result);
	printf("The square root of %d is %d\n",z,result);

	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void array(int mas[],int size)
{
	for(int i=0;i<size;i++)
	{
		mas[i]=rand()%100;
	}
	printf("\nThe generated array:\n");
	for(int i=0;i<size;i++)
    {
		printf("%3i ",mas[i]);
    }
}

int main()
{
	srand(time(NULL));
    int mas1[100];
    int mas2[100];
    int a=0;
    int b=0;
    while ((a<1)||(a>100))
    {
        printf("Enter the number of values of the first array from 1 to 100:\n");
        scanf("%i",&a);
    }
    while ((b<1)||(b>100))
    {
		printf("Enter the number of values of the second array from 1 to 100:\n");
		scanf("%i",&b);
    }
    printf("The finished result:\n");
	array(mas1,a);
	array(mas2,b);

    return 0;
}

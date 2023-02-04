#include<stdio.h>

main()
{
    int i=1;
    int sum=0;
    printf("Sum of numbers 1 to 100:\n");
    for(;i<100;i++)
    {
        printf("%i+",i);
        sum=sum+i;
    }
    sum=sum+i;
    printf("%i=%i",i,sum);
}

#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int q=0;
	while ((q==0)||(q>=100))
	{
		printf("Enter numbers or words in Latin letters:\n");
		gets(str);
		q=strlen(str);
	}
	printf("\nThe 2nd symbol in the string: %c\n",str[1]);
	printf("The last symbol in the string: %c\n",str[q-1]);
	
	int a, b;
	while (((a<1)||(a>q))||(b<1)||(b>q))
	{
		printf("Enter the two symbol numbers you want to swap:\n");
		scanf("%i",&a);
		scanf("%i",&b);
	}

	char c=str[a-1];
	str[a-1]=str[b-1];
	str[b-1]=c;
	printf("The result of rearranging the symbols in the string:\n");
	puts(str);
	int d=0;
	while ((d<1)||(d>q))
	{
		printf("\nEnter the number of the symbol in the string that you want to delete:\n");
		scanf("%i",&d);
	}
	for (int j=d-1;j<q;j++)
	{
		str[j]=str[j+1];
	}
	printf("\nThe finished result in the string:\n");
	puts(str);
}

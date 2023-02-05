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
	for (int j=0;j<q;j++)
	{
		str[j]=str[j+1];
	}
	printf("\nString after deleting the first symbol:\n");
	puts(str);
	
	char strmir[100];
	for(int j=strlen(str);j>0;j--)
	{
		strmir[strlen(str)-j]=str[j-1];       
	}
	strmir[strlen(str)]=str[strlen(str)];
	printf("\nMirroring the string:\n");
	puts(strmir);
}

#include <stdio.h>
#include <string.h>

void symbol(char *str, char s)
{
	int len=strlen(str);
	str[0]=s;
	str[len-1]=s;
}

int main()
{
	char str[100];
	char s;
	printf("Enter the string:\n");
	gets(str);
	printf("Enter the symbol:\n");
	s=getchar();
	symbol(str,s);
	printf("Modified string:\n%s\n", str);
	return 0;
	
//Во втором задании я не понял, как сделать работающую функцию;
//поэтому мне достаточно только одного выполненного задания. 
}

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[100];
	char dstr[100];
	printf("Enter the string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	}
	i=i-1;
	 
	for(j=0;i>=0;i--,j++)
	{
		dstr[j]=str[i];
	}
	dstr[j]='\0';
	printf("\n%s",dstr);
	 
	 
}

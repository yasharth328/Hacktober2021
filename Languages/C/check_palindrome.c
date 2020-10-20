#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[100];
	printf("Enter the string\n");
	gets(str);
	for(j=0;str[j]!='\0';j++)
	{
	}
	j=j-1;
	for(i=0;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			printf("\nThe string is not a pallindrome");
			break;
		}
		
	}
	if(str[i]==str[j])
	{
		printf("\nThe string is a pallindrome");
	}
}

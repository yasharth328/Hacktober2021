#include<stdio.h>
int fun(int n)
{
	if(n==0)
		return 1;
	else
		return n*fun(n-1);
}
int main()
{
	int num ,fact=0;
	printf("enter the number");
	scanf("%d",&num);
	fact=fun(num);
	printf("Factorial is %d",fact);
	
}

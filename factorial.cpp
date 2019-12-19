//#sum of first n natural numbers
#include<stdio.h>
int main()
{
	int  fact=1,i,n;
	printf("enter the n values");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}

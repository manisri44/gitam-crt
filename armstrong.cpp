// armstrong number
#include<stdio.h>
int main()
{
	int n,sum=0,r,num;
	printf("%d",n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(num==sum)
	printf("%d is armstrong",num);
	else
	printf("%d is not armstrong number",num);
	return 0;
}

//divisors of given number
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	printf("enetr the values of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\t",i);
		}
		return 0;
	}

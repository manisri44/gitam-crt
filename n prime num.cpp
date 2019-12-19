//print n prime numbers
#include<stdio.h>
int main()
{
	int i,n,j,flat;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=2;n>0;i++)
	{
		flat=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flat=1;
				break;
				
			}
			}
			if(flat==0)	
			{
				printf("%d\t",i);
				n--;			
				}
			}
			return 0;
			}

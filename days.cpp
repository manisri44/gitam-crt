#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tues");
			break;
		case 3:
			printf("wed");
			break;
		case 4:
			printf("thus");
			break;
		case 5:
			printf("fri");
			break;
		case 6:
			printf("sat");
			break;
	   case 7:
	   	   printf("sun");
	   	   break;
	    default:
	   	   	printf("no");
	        break;
	} 
	return 0;
}

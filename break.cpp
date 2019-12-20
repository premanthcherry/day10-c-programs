#include<stdio.h>
main()
{
	int i,n;
	printf("\n enter the n value:");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		printf("\n %d",i);
		if(i==n)
		break;
	}
}

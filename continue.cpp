// print 1 to 20 numbers except 11 using continue;
#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i==11||i==17)
		continue;
	printf("\n%d",i);
    }
}
